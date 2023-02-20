#include <QString>
#include <QStringList>
namespace Langrisser {
enum eTileType {
    Normal=0, Dirt,Road,
    Forest,SandDune,Mountain,
    UnderWater,Castle,InDoorFloor,
    Wall,InDoor,Temple,
    Throne,Bridge,Bridge2,
    Hall,Cave,Lava,
    ChurchYard,OnBoard,OnWater,
    Roof,Gunnel, SandGround,
    Street, AnotherSpace,Ruins,
    HighWall,ProhibitArea

} ;
const QStringList TileTypeName = {
        "평지",
        "황무지",
        "도로",
        "숲",
        "모래언덕",
        "산",
        "수중",
        "성",
        "실내바닥",
        "벽",
        "실내",
        "신전",
        "왕좌",
        "다리",
        "현수교",
        "빈공간",
        "동굴",
        "용암",
        "묘지",
        "배위",
        "수상",
        "지붕",
        "뱃전",
        "모래바닥",
        "거리",
        "이공간",
        "폐허",
        "높은벽",
        "금지구역"
};
const QStringList UnitTypeName  = {"보병-일반",
                                  "보병-승병",
                                  "장창",
                                  "기마-일반",
                                  "기마-특수",
                                  "비병",
                                  "보병-도적",
                                  "수병-일반",
                                  "겔",
                                  "마족",
                                  "수병-해수",
                                  "보병-야복",
                                  "보병-법사",
                                  "불사-귀혼",
                                  "불사-일반",
                                  "궁병-일반",
                                  "궁병-특수",
                                  "용족"
};

 /*
typedef enum eLang_UnitType {
    type1=0,
    type2,type3,type4,type5,
    승병=1,
    장창=2,
    기마=3,
    특수기마=4,
    비병=5,
    도적=6,
    수병=7,
    겔=8,
    마족=9,
    수병_해수=10,
    유격대=11,
    법사=12,
    귀혼=13,
    불사=14,
    궁병=15,
    특수궁병=16,
    용족=17
} UnitType;
*/
typedef qint8 UnitType;


typedef enum eLANG_Spell_Type_SHR {
    MagicArrow=0,
    Blast=1,
    Thunder=2,
    Fireball=3,
    Meteor=4,
    Blizard=5,
    Tornado=6,
    TurnUndead=7,
    EarthQuake=8,
    Heal1=9,
    Heal2=10,
    ForceHeal1=11,
    ForceHeal2=12,
    Sleep=13,
    Mute=14,
    Protection1=15,
    Protection2=16,
    Attack1=17,
    Attack2=18,
    Zone=19,
    Teleport=20,
    Resist=21,
    Charm=22,
    Quick=23,
    Again=24,
    Declain=25,
    Valkyrie=26,
    Freier=27,
    WhiteDragon=28,
    Saramanda=29,
    IronGolem=30,
    DemonLord=31
} Spell_Type;


/*
typedef enum eLang_ClassType {
    Blank=0,
    FIGHTER1=1,
    FIGHTER2=2,
    FIGHTER3=3,
    Gladiator=4,
    Vampire=5,
    Knight=6,
    나이트3=7,
    Pirate=8,
    HawkKnite1=9,
    HawkKnight2=10,
    Sister=11,
    Shaman=12,
    Warlock=13,
    워록=14,
    Werewolf=15,
    Gelgazer=16,
    Ghost=17,
    Scylla=18,
    Roc=19,
    Lord1=20,
    Lord2=21,
    Lord3=22,
    파이로트2=23,
    Assassin=24,
    SilverKnight=25,
    SilverKnight2=26,
    SilverKnight3=27,
    Captain=28,
    Captain2=29,
    HawkLord1=30,
    HawkLord2=31,
    Cleric=32,
    Necromancer=33,
    Sorcerer1=34,
    Sorcerer2=35,
    소서러=36,
    Paladin=37,
    팔라딘=38,
    Kerberos=39,
    Dullahan=40,
    Lich=41,
    Serpent=42,
    Wyvern=43,
    HighLord1=44,
    HighLord2=45,
    HighLord3=46,
    소드맨=47,
    소드맨2=48,
    하이렌더1=49,
    하이렌더2=50,
    하이렌더3=51,
    서펜트나이트=52,
    글레디에이터=53,
    드래곤나이트1=54,
    드래곤나이트2=55,
    프리스트=56,
    서머너=57,
    메이지=58,
    메이지2=59,
    메이지3=60,
    세인트1=61,
    세인트2=62,
    유니콘나이트=63,
    미노타우르스=64,
    리빙아머=65,
    서큐버스=66,
    크라켄=67,
    피닉스=68,
    제너럴1=69,
    제너럴2=70,
    제너럴3=71,
    소드마스터1=72,
    소드마스터2=73,
    나이트마스터1=74,
    나이트마스터2=75,
    나이트마스터3=76,
    서펜트로드=77,
    파이로트=78,
    드래곤로드1=79,
    드래곤로드2=80,
    하이프리스트=81,
    자베러=82,
    자베러2=83,
    아크메이지1=84,
    아크메이지2=85,
    아크메이지3=86,
    세이지1=87,
    시이지2=88,
    레인저1=89,
    레인저2=90,
    마스터디노1=91,
    스톤골렘=92,
    VampireLoad=93,
    Jormungand=94,
    GreatDragon=95,
    킹=96,
    엠퍼러=97,
    히어로1=98,
    히어로2=99,
    히어로3=100,
    퀸=101,
    로얄가드1=102,
    로얄가드2=103,
    로얄가드3=104,
    로얄가드4=105,
    서펜트마스터2=106,
    드래곤마스터3=107,
    에이전트=108,
    다크마스터1=109,
    다크마스터2=110,
    위자드1=111,
    위자드2=112,
    위자드3=113,
    위자드4=114,
    프린세스=115,
    소서러3=116,
    하이마스터1=117,
    하이마스터2=118,
    몽크1=119,
    바바리안1=120,
    솔져1=121,
    솔져2=122,
    솔져3=123,
    버서커=124,
    그레네이더=125,
    그레네이더2=126,
    그레네이더3=127,
    다크가드=128,
    렌서=129,
    트루퍼1=130,
    트루퍼2=131,
    헬하운드=132,
    로얄랜서=133,
    드라군1=134,
    드라군2=135,
    본디노1=136,
    창병1=137,
    창병2=138,
    창병3=139,
    팔랑크스1=140,
    팔랑크스2=141,
    팔랑크스3=142,
    골렘=143,
    엘프1=144,
    엘프2=145,
    엘프3=146,
    다크엘프=147,
    하이엘프1=148,
    하이엘프2=149,
    크롤러=150,
    위치=151,
    발리스타1=152,
    발리스타2=153,
    발리스타3=154,
    앤트=155,
    고스트=156,
    스펙터=157,
    데몬=158,
    아크데몬=159,
    머맨1=160,
    머맨2=161,
    리자드맨1=162,
    리자드맨2=163,
    닉시=164,
    닉시2=165,
    레비아탄1=166,
    레비아탄2=167,
    하피=168,
    하피2=169,
    페어리=170,
    박쥐=171,
    그리핀1=172,
    그리핀2=173,
    앤젠=174,
    가고일=175,
    몽크=176,
    바바리안=177,
    크루세이더=178,
    퀸앤트=179,
    바바리안2=180,
    바바리안3=181,
    밴디트1=182,
    밴디트2=183,
    좀비=184,
    스켈레톤=185,
    울프맨=186,
    오우거=187,
    겔1=188,
    엘리맨탈=189,
    마을사람=190,
    발키리=191,
    프레이아=192,
    WhiteDragon1=193,
    살라만더=194,
    아이언골렘=195,
    데몬로드=196,
    슬레이프닐=197,
    펜릴=198,
    Aniki=199,
    BodyBuilder=200,
    킹2=201,
    엠퍼러2=202,
    엠퍼러3=203,
    어새신=204,
    샤먼2=205,
    샤먼3=206,
    실버나이트3=207,
    나이트마스터4=208,
    실버나이트4=209,
    로드4=210,
    자베러3=211,
    드래곤로드4=212,
    아크메이지4=213,
    팔라딘4=214,
    몽크4=215,
    나이트4=216,
    트루퍼4=217,
    그랜드나이트=218,
    어새신3=219,
    버서커2=220,
    크루세이더2=221,
    레비아탄3=222,
    위자드5=223,
    하이프리스트4=224,
    카오스3=225,
    비숍2=226,
    루시리스=227,
    소서러4=228,
    실버나이트5=229,
    네크로맨서2=230,
    세인트4=231,
    메이지4=232,
    소드맨4=233,
    바실리스크=234,
    세인트5=235,
    서머너5=236,
    소드맨6=237,
    서펜트나이트5=238,
    프리스트5=239,
    호크나이트4=240,
    드래곤로드5=241,
    세이지4=242,
    세이지5=243,
    아크메이지5=244,
    제너럴5=245,
    소드마스터5=246,
    서펜트로드5=247,
    소드마스터6=248,
    하이프리스트6=249,
    이프리트=250,
    제너럴7=251,
    그랜드나이트5=252,
    그랜드나이트6=253,
    나이트2=254,
    Not_Available=65535
} ClassType;*/
typedef qint8 ClassType;
 const  QStringList characterNameList = { ""
                                       ,"Fighter"
                                       ,"Fighter"
                                       ,"Fighter"
                                       ,"Gladiator"
                                       ,"Vampire"
                                       ,"Knight"
                                       ,"Knight"
                                       ,"Pirate"
                                       ,"Hawk Knight"
                                       ,"Hawk Knight"
                                       ,"Sister"
                                       ,"Shaman"
                                       ,"Warlock"
                                       ,"Warlock"
                                       ,"Werewolf"
                                       ,"Gelgazer"
                                       ,"Ghost"
                                       ,"Scylla"
                                       ,"Roc"
                                       ,"Lord"
                                       ,"Lord"
                                       ,"Lord"
                                       ,"Pirate"
                                       ,"Assassin"
                                       ,"Silver Knight"
                                       ,"Silver Knight"
                                       ,"Silver Knight"
                                       ,"Captain"
                                       ,"Captain"
                                       ,"Hawk Lord"
                                       ,"Hawk Lord"
                                       ,"Cleric"
                                       ,"Necromancer"
                                       ,"Sorcerer"
                                       ,"Sorcerer"
                                       ,"Sorcerer"
                                       ,"Paladin"
                                       ,"Paladin"
                                       ,"Kerberos"
                                       ,"Dullahan"
                                       ,"Lich"
                                       ,"Serpent"
                                       ,"Wyvern"
                                       ,"High Lord"
                                       ,"High Lord"
                                       ,"High Lord"
                                       ,"Swordsman"
                                       ,"Swordsman"
                                       ,"Highlander"
                                       ,"Highlander"
                                       ,"Highlander"
                                       ,"Serpent Knight"
                                       ,"Gladiator"
                                       ,"Dragon Knight"
                                       ,"Dragon Knight"
                                       ,"Priest"
                                       ,"Summoner"
                                       ,"Mage"
                                       ,"Mage"
                                       ,"Mage"
                                       ,"Saint"
                                       ,"Saint"
                                       ,"Unicorn Knight"
                                       ,"Minotaur"
                                       ,"Living Armor"
                                       ,"Succubus"
                                       ,"Kraken"
                                       ,"Phoenix"
                                       ,"General"
                                       ,"General"
                                       ,"General"
                                       ,"Sword Master"
                                       ,"Sword Master"
                                       ,"Knight Master"
                                       ,"Knight Master"
                                       ,"Knight Master"
                                       ,"Serpent Lord"
                                       ,"Pirate"
                                       ,"Dragon Lord"
                                       ,"Dragon Lord"
                                       ,"High Priest"
                                       ,"Zauberer"
                                       ,"Zauberer"
                                       ,"Arch Mage"
                                       ,"Arch Mage"
                                       ,"Arch Mage"
                                       ,"Sage"
                                       ,"Sage"
                                       ,"Ranger"
                                       ,"Ranger"
                                       ,"Master Dino"
                                       ,"Stone Golem"
                                       ,"Vampire Lord"
                                       ,"Jormungand"
                                       ,"Great Dragon"
                                       ,"King"
                                       ,"Emperor"
                                       ,"Hero"
                                       ,"Hero"
                                       ,"Hero"
                                       ,"Queen"
                                       ,"Royal Guard"
                                       ,"Royal Guard"
                                       ,"Royal Guard"
                                       ,"Royal Guard"
                                       ,"Serpent Master"
                                       ,"Dragon Master"
                                       ,"Agent"
                                       ,"Dark Master"
                                       ,"Dark Master"
                                       ,"Wizard"
                                       ,"Wizard"
                                       ,"Wizard"
                                       ,"Wizard"
                                       ,"Princess"
                                       ,"Sorcerer"
                                       ,"High Master"
                                       ,"High Master"
                                       ,"Monk"
                                       ,"Barbarian"
                                       ,"Soldier"
                                       ,"Soldier"
                                       ,"Soldier"
                                       ,"Berzerker"
                                       ,"Grenadier"
                                       ,"Grenadier"
                                       ,"Grenadier"
                                       ,"Dark Guard"
                                       ,"Lancer"
                                       ,"Trooper"
                                       ,"Trooper"
                                       ,"Hellhound"
                                       ,"Royal Lancer"
                                       ,"Dragoon"
                                       ,"Dragoon"
                                       ,"Bone Dino"
                                       ,"Pikemen"
                                       ,"Pikemen"
                                       ,"Pikemen"
                                       ,"Phalanx"
                                       ,"Phalanx"
                                       ,"Phalanx"
                                       ,"Golem"
                                       ,"Elf"
                                       ,"Elf"
                                       ,"Elf"
                                       ,"Dark Elf"
                                       ,"High Elf"
                                       ,"High Elf"
                                       ,"Crawler"
                                       ,"Witch"
                                       ,"Ballista"
                                       ,"Ballista"
                                       ,"Ballista"
                                       ,"Ant"
                                       ,"Ghost"
                                       ,"Spectre"
                                       ,"Demon"
                                       ,"Arch Demon"
                                       ,"Mermen"
                                       ,"Mermen"
                                       ,"Lizardman"
                                       ,"Lizardman"
                                       ,"Nixie"
                                       ,"Nixie"
                                       ,"Leviathan"
                                       ,"Leviathan"
                                       ,"Harpy"
                                       ,"Harpy"
                                       ,"Fairy"
                                       ,"Bat"
                                       ,"Griffin"
                                       ,"Griffin"
                                       ,"Angel"
                                       ,"Gargoyle"
                                       ,"Monk"
                                       ,"Barbarian"
                                       ,"Crusader"
                                       ,"Queen Ant"
                                       ,"Barbarian"
                                       ,"Barbarian"
                                       ,"Bandit"
                                       ,"Bandit"
                                       ,"Zombie"
                                       ,"Skeleton"
                                       ,"Wolfman"
                                       ,"Ogre"
                                       ,"Gel"
                                       ,"Elemental"
                                       ,"Civilian"
                                       ,"Valkyrie"
                                       ,"Freiya"
                                       ,"White Dragon"
                                       ,"Salamander"
                                       ,"Iron Golem"
                                       ,"Demon Lord"
                                       ,"Sleipnir"
                                       ,"Fenrir"
                                       ,"Aniki"
                                       ,"Builder"
                                       ,"King"
                                       ,"Emperor"
                                       ,"Emperor"
                                       ,"Assassin"
                                       ,"Shaman"
                                       ,"Shaman"
                                       ,"Silver Knight"
                                       ,"Knight Master"
                                       ,"Silver Knight"
                                       ,"Lord"
                                       ,"Zauberer"
                                       ,"Dragon Lord"
                                       ,"Arch Mage"
                                       ,"Paladin"
                                       ,"Monk"
                                       ,"Knight"
                                       ,"Trooper"
                                       ,"Grand Knight"
                                       ,"Assassin"
                                       ,"Berzerker"
                                       ,"Crusader"
                                       ,"Leviathan"
                                       ,"Wizard"
                                       ,"High Priest"
                                       ,"Chaos"
                                       ,"Bishop"
                                       ,"Lushiris"
                                       ,"Sorcerer"
                                       ,"Silver Knight"
                                       ,"Necromancer"
                                       ,"Saint"
                                       ,"Mage"
                                       ,"Swordsman"
                                       ,"Basilisk"
                                       ,"Saint"
                                       ,"Summoner"
                                       ,"Swordsman"
                                       ,"Serpent Knight"
                                       ,"Priest"
                                       ,"Hawk Knight"
                                       ,"Dragon Lord"
                                       ,"Sage"
                                       ,"Sage"
                                       ,"Arch Mage"
                                       ,"General"
                                       ,"Sword Master"
                                       ,"Serpent Lord"
                                       ,"Sword Master"
                                       ,"High Priest"
                                       ,"Efreet"
                                       ,"General"
                                       ,"Grand Knight"
                                       ,"Grand Knight"
                                       ,"Knight"
                                     };

 const QStringList Spell_Type_names = {"매직 애로우",
                                       "블래스트",
                                       "썬더",
                                       "파이어 볼",
                                       "메테오",
                                       "블리져드",
                                       "토네이도",
                                       "턴언데드",
                                       "어스퀘이크",
                                       "힐1",
                                       "힐2",
                                       "포스 힐1",
                                       "포스 힐2",
                                       "슬립",
                                       "뮤트",
                                       "프로텍션1",
                                       "프로텍션2",
                                       "어택1",
                                       "어택2",
                                       "죤",
                                       "텔레포트",
                                       "레지스트",
                                       "참",
                                       "퀵",
                                       "어게인",
                                       "디클레인",
                                       "발키리",
                                       "프레이어",
                                       "화이트 드래곤",
                                       "사라만다",
                                       "아이언 골렘",
                                       "데몬 로드"
};

}
