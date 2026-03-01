#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <mutex>
std::mutex mtx; 
#include <android/content/Intent.h>
#include "imgui/imgui.h"
#include "Helper/Icon.h"
#include "Helper/Iconcpp.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include <Helper/define.h>
#include "Helper/ImguiPP.h"
#include "Helper/RemapTools.h"
#include "Helper/Menu.h"
#include "Helper/fake_dlfcn.h"
#include "Helper/Includes.h"
#include "Helper/plthook.h"
#include "Helper/json.hpp"
#include "Helper/StrEnc.h"
#include "Helper/Spoof.h"
#include "Helper/Tools.h"
#include "Helper/timer.h"
#include "Helper/obfuscate.h"
#include "Helper/Dobby/dobby.h"
#include "Helper/Items.h"
#include "Helper/Vector3.hpp"
#include "Helper/ElfImg.h"
#include "Helper/Rect.h"
#include "Substrate/SubstrateHook.h"
#include "patch/MemoryPatch.h"
#include "Helper/JBM_OWNER.h"
#include "base64/base64.h"
#include "SDK.hpp"
#include "Macros.h"
//#include "Helper/UE4.h"
bool THUNDER_AIM;
bool THUNDER_BT;
bool THUNDER_MAGIC;
bool THUNDER_XHIT;
ImFont* NHKModFont;
ImFont* basic = nullptr;
char extras[32];
#include <cstring>
#include <string.h>
bool Logo = true;
float accent_color[4] = { 0.300f, 0.220f, 0.750f, 1.000f };
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
using namespace SDK;
using json = nlohmann::json;
int gScreenWidth;
int gScreenHeight;

uintptr_t anogs;
static float destination[3] = { 100.0f, 200.0f, 10.0f };
static float rotation[3] = { 0.0f, 0.0f, 0.0f };
 #include <And64InlineHook/And64InlineHook.hpp>
 
#include <curl/curl.h>
#include <openssl/evp.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/err.h>
#include <openssl/md5.h>


#define GEngine_Offset 0xe030570
#define GEngine_Offset 0xe030530
#define GNames_Offset 0x8103904
#define GUObject_Offset 0xdd91fa0
#define GNativeAndroidApp_Offset 0xdad0280
#define Actors_Offset 0xA0
#define GetActorArray 0x9e70e64

bool End;


 uint32_t Colors[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

long GetRandomColorByIndex(int index) {
    srand(index);
    int a = 255;
    int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);
    return IM_COL32(a, r, g, b);
}

long GetRandomColorByIndexAlpa(int index) {
    srand(index);
    int a = 100;
    int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);
    return IM_COL32(a, r, g, b);
}
static int a = 0;
time_t rng = 0;
static 
std::string expiredDate = " 1st login";
std::string name ="";
std::string deviceSlot = "";
std::string status = "";
std::string floating ="";
std::string g_Token, g_Auth;

static bool WantTextInputLast = false;

ProcMap g_Handle;

struct  MemTrap_t {
  uintptr_t baseAddr;
  uintptr_t endAddr;
};

std::vector<MemTrap_t> MemTraps = std::vector<MemTrap_t>();

bool IsObjectInvalid(UObject *pObject) {
    if (pObject == 0)
        return true;

    for (auto &i : MemTraps) {
        if ((uintptr_t) pObject >= i.baseAddr && (uintptr_t) pObject <= i.endAddr) {
            return true;
        }
    }
    return false;
}

bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
json items_data;
bool bValid = false;
bool server = false;
#define SLEEP_TIME 1000LL / 120LL
uintptr_t anort;
static char s[64];
ImColor outlinecolor = IM_COL32(10, 10, 10, 255);


bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}


enum EAim {
  Distance = 0,
  Croshhair = 1
};

enum EAimTarget {
    Head = 0,
    Chest = 1
};

enum EEsp {
  EspTop = 0,
  EspBelow = 1,
  EspNone = 3
  
};

enum ECount {
  Count =0,
  Countb = 1,
  Countc = 2
  
};

enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};

std::map<int, bool> Items;
std::map<int, float *> ItemColors;

static float chestY = 25.0f;
bool BTBUTTON;

struct sConfig {
    int Ipads;
	float FPSControlSize;
	bool Bypass;
	bool Kill;
 	float Skill;
	float Skill1;
	float Skill3;
	float Skill4;
	float Skill2;
    float Recc;
	bool Line;
	float Prid;
	float Pridd;
	bool Skeleton;	
	float Meter;
	float RadarX;
	float RadarY;
    float Loot;
bool Antiban;
bool IgnoreKnocked;
bool VisCheck;
bool IgnoreBots;
bool Linee;
bool Grenade;
bool Vehicle;
bool Box;
bool Radar;
bool Health;
bool Name;
bool Distance;
bool TeamID;
bool Weapon;
bool Malik;
bool Malik2;
bool Dbox;
bool LootBox;
bool Ping;
bool LootI;
bool NoBot;
bool Alert;
bool Air;
bool Warning;
bool Genn;
bool ShowVehicle;
bool VehicleFuel;
bool Small;
bool Cross;
bool Ipad;
bool Unlock;
bool Less;
bool Skeletonn;
bool Plane;
bool VehicleHealth;
bool info;
bool autowalljump;
bool autoall;
bool Fovb;
bool GameInfo;
bool bypasss;
bool BypassLogo;
bool SpawanByp;
	
    struct sESPMenu {
        bool Line;
        bool Box;
        bool Skeleton;
        bool island;
        bool Health;
        bool ShowKnockedHealth;
        bool Name;
        bool Distance;
        bool TeamID;
        bool Weapon;
        bool Dbox;
        bool Radar;
        bool Offsc;
        bool Genn;
        bool NoBot;
        bool Loot;

		EEsp By;
		ECount Byy;
    };
    sESPMenu ESPMenu;


    struct sHighRisk {
        bool Shake;
        bool Recoil;
        bool Instant;
		bool Ghost;
        bool Para;
        bool Cross;
        bool IPad;
		bool HitEffect;
    };
    sHighRisk HighRisk{0};
    struct sVehicleESP {
        bool ShowVehicle;
        bool ShowDistance;
    };
    sVehicleESP VehicleESP{0};
     struct sSilentAim {
        bool Enable;
        bool AimBot;
		float Cross;
        float Recc;
		EAim By;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool Pred;
        bool ReCo;
        bool IgnoreKnocked;
        bool VisCheck;
		bool IgnoreBots;
		bool Recoil;
		bool Fov;
    };
    sSilentAim SilentAim{0};
	
	
	
	struct sAimMenu {
        bool Enable;
        bool VisCheck;
        bool IgnoreKnock;
        bool IgnoreBot;
        bool AimPrediction;
        float Cross;
        bool RecoilControl;
        bool Position;
        float AimSmooth = 2.9;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool RecoilComparison;
        float Recc;
        float RecoilSet = 1.5f;
        float Range = 100.0f;
        float Fov = 180.0f;
        float FireSpeed;
    
		
    };

    sAimMenu AimBot{0};
	
	
	   struct sOTHER {
        bool FPS;
    };
    sOTHER OTHER{0};

    struct sColorsESP {
		float *Text;
	float *Menucolour;
	
        float *Line;
        float *Box;
		float *Linebot1;
		float *Line1;
		float *Visline;
		float *Boxbot;
        float *Name;
        float *Distance;
        float *Skeleton;
		 float *Skeletonbot;
         float *Skeletonnon;
         float *BotNn;
         float *BotNv;
         float *PotNn;
         float *PotNv;
         float *SkeletonVisible;
		 float *nonbot;
       //  float *Radar;
		  float *Linebot;
        float *Count;
        float *Vehicle;
		float *Fov;
		float *ImColor;
		float *aimbot;
		
    };
    sColorsESP ColorsESP{0};
};




sConfig Config{0};

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};

 
uintptr_t UE4;
uintptr_t g_Anogs;
uintptr_t g_gcloud;
uintptr_t g_swappy;
uintptr_t g_TDataMaster;
uintptr_t AimBullet_Offset;
uintptr_t GWorld_Offset, GUObjectArray_Offset, SilentAim_Offset;

android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
timer RenderingFPS;


struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}



 
std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}

float AimSmooth = 4.0f;

void THUNDER(FRotator &angles) {
    if (angles.Pitch > 180)
        angles.Pitch -= 360;
    if (angles.Pitch < -180)
        angles.Pitch += 360;

    if (angles.Pitch < -75.f)
        angles.Pitch = -75.f;
    else if (angles.Pitch > 75.f)
        angles.Pitch = 75.f;

    while (angles.Yaw < -180.0f)
        angles.Yaw += 360.0f;
    while (angles.Yaw > 180.0f)
        angles.Yaw -= 360.0f;
}
void THUNDER(float *angles) {
    if (angles[0] > 180)
        angles[0] -= 360;
    if (angles[0] < -180)
        angles[0] += 360;

    if (angles[0] < -75.f)
        angles[0] = -75.f;
    else if (angles[0] > 75.f)
        angles[0] = 75.f;

    while (angles[1] < -180.0f)
        angles[1] += 360.0f;
    while (angles[1] > 180.0f)
        angles[1] -= 360.0f;
}


void THUNDER(Vector3 angles) {
    if (angles.X > 180)
        angles.X -= 360;
    if (angles.X < -180)
        angles.X += 360;

    if (angles.X < -75.f)
        angles.X = -75.f;
    else if (angles.X > 75.f)
        angles.X = 75.f;

    while (angles.Y < -180.0f)
        angles.Y += 360.0f;
    while (angles.Y > 180.0f)
        angles.Y -= 360.0f;
}long GetEpochTime()
    {
    auto duration = std::chrono::system_clock::now().time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    }
 

 
//Auto
UWorld *GEWorld;
int GWorldNum = 0;
TUObjectArray gobjects;
UWorld *GetWorld()
{
    if(GWorldNum == 0) {
        gobjects = UObject::GUObjectArray->ObjObjects;
        for (int i=0; i< gobjects.Num(); i++)
            if (auto obj = gobjects.GetByIndex(i)) {
                if(obj->IsA(UEngine::StaticClass())) {
                    auto GEngine = (UEngine *) obj;
                    if(GEngine) {
                        auto ViewPort = GEngine->GameViewport;
                        if (ViewPort)
                        {
                            GEWorld = ViewPort->World;
                            GWorldNum = i;
                            return ViewPort->World;
                        }
                    }
                }
            }
    }else {
        auto GEngine = (UEngine *) (gobjects.GetByIndex(GWorldNum));
        if(GEngine) {
            auto ViewPort = GEngine->GameViewport;
            if(ViewPort) {
                GEWorld = ViewPort->World;
                return ViewPort->World;
            }
        }
    }
    return 0;
}




TNameEntryArray *GetGNames()
{
    return ((TNameEntryArray * (*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();
 
    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();
 
    struct GovnoArray {
        uintptr_t base;
        int32_t count;
        int32_t max;
    };
    static thread_local GovnoArray Actors{};
 
    Actors = *(((GovnoArray*(*)(uintptr_t))(UE4 + GetActorArray))(reinterpret_cast<uintptr_t>(PersistentLevel)));
 
    if (Actors.count <= 0) {
        return {};
    }
 
    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.count; i++) {
        auto Actor = *(uintptr_t *) (Actors.base + (i * sizeof(uintptr_t)));
        if (Actor) {
            actors.push_back(reinterpret_cast<AActor *const>(Actor));
        }
    }
    return actors;
}

std::string deviceBrandModel() {
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    
        std::string b = Tools::GetDeviceBrand(env);
        b += " - ";
        b += Tools::GetDeviceModel(env);
    
    vm->DetachCurrentThread();

    return b;
}

template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
 

int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

    auto protect(uintptr_t addr, size_t len, int32_t prot) {
     static_assert(PAGE_SIZE == 4096);
   constexpr size_t page_size =                static_cast<size_t>(PAGE_SIZE);
 void* start = reinterpret_cast<void*>(addr & -page_size);
 uintptr_t end = (addr + len + page_size - 1) & -page_size;
 return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
}

FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
    bool flag = false;
    double num = (double)Yaw;
    double num2 = num * 0.017453292519943295;
    float num3 = (float)std::cos(num2);
    float num4 = (float)std::sin(num2);
    float num5 = Origin.X - LocalOrigin.X;
    float num6 = Origin.Y - LocalOrigin.Y;
    struct FVector Xector;
    Xector.X = (num6 * num3 - num5 * num4) / 150.f;
    Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
    struct FVector Xector2;
    Xector2.X = Xector.X + PosX + Size.X / 2.f;
    Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
    bool flag2 = Xector2.X > PosX + Size.X;
    if (flag2) {
        Xector2.X = PosX + Size.X;
    }else{
        bool flag3 = Xector2.X < PosX;
        if (flag3) {
            Xector2.X = PosX;
        }
    }
    bool flag4 = Xector2.Y > PosY + Size.Y;
    if (flag4) {
        Xector2.Y = PosY + Size.Y;
    }else{
        bool flag5 = Xector2.Y < PosY;
        if (flag5){
            Xector2.Y = PosY;
        }
    }
    bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
    if (flag6){
        flag = true;
    }
    outbuff = flag;
    return Xector2;
}

// ======================================================================== //

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)


#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))

void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
	if (forward.X == 0.f && forward.Y == 0.f) {
		angles.X = forward.Z > 0.f ? -90.f : 90.f;
		angles.Y = 0.f;
	} else {
		angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
		angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
	}
	angles.Z = 0.f;
}

struct D3DMatrix
{
    float _11, _12, _13, _14;
    float _21, _22, _23, _24;
    float _31, _32, _33, _34;
    float _41, _42, _43, _44;
};

D3DMatrix QuatToMatrix(const FQuat &quat)
{
    D3DMatrix mat;

    float magnitude = std::sqrt(quat.X * quat.X + quat.Y * quat.Y + quat.Z * quat.Z + quat.W * quat.W);
    float qx = quat.X / magnitude;
    float qy = quat.Y / magnitude;
    float qz = quat.Z / magnitude;
    float qw = quat.W / magnitude;

    float xx = qx * qx;
    float xy = qx * qy;
    float xz = qx * qz;
    float xw = qx * qw;

    float yy = qy * qy;
    float yz = qy * qz;
    float yw = qy * qw;

    float zz = qz * qz;
    float zw = qz * qw;

    mat._11 = 1.0f - 2.0f * (yy + zz);
    mat._12 = 2.0f * (xy - zw);
    mat._13 = 2.0f * (xz + yw);
    mat._14 = 0.0f;

    mat._21 = 2.0f * (xy + zw);
    mat._22 = 1.0f - 2.0f * (xx + zz);
    mat._23 = 2.0f * (yz - xw);
    mat._24 = 0.0f;

    mat._31 = 2.0f * (xz - yw);
    mat._32 = 2.0f * (yz + xw);
    mat._33 = 1.0f - 2.0f * (xx + yy);
    mat._34 = 0.0f;

    mat._41 = 0.0f;
    mat._42 = 0.0f;
    mat._43 = 0.0f;
    mat._44 = 1.0f;

    return mat;
}

struct Matrix
{
    float m[4][4];
};

Matrix GetMatrix()
{
    static UCanvas* Canvas = nullptr;

    if (Canvas == nullptr)
    {
        Canvas = UObject::FindObject<UCanvas>("Canvas Transient.DebugCanvasObject");
    }

    if (!Canvas)
    {
        return Matrix{};
    }

    uintptr_t lodalele;

#if defined(__LP64__)
    lodalele = 0x270;
#else
    lodalele = 0x200;
#endif

    return *(Matrix*)((uintptr_t)Canvas + lodalele);

}


bool WorldToScreenPlayer(FVector pos, FVector &screen, int *distance)
{
    Matrix ViewMatrix = GetMatrix();

    screen = {};
    *distance = 0;

    float screenW = (ViewMatrix.m[0][3] * pos.X) + (ViewMatrix.m[1][3] * pos.Y) + (ViewMatrix.m[2][3] * pos.Z + ViewMatrix.m[3][3]);
    if (screenW < 0.0001f)
        return false;

    *distance = (screenW / 100);
    float screenY = (ViewMatrix.m[0][1] * pos.X) + (ViewMatrix.m[1][1] * pos.Y) + (ViewMatrix.m[2][1] * (pos.Z + 85) + ViewMatrix.m[3][1]);
    float screenX = (ViewMatrix.m[0][0] * pos.X) + (ViewMatrix.m[1][0] * pos.Y) + (ViewMatrix.m[2][0] * pos.Z + ViewMatrix.m[3][0]);
    screen.Y = (glHeight / 2.f) - (glHeight / 2.f) * screenY / screenW;
    screen.X = (glWidth / 2.f) + (glWidth / 2.f) * screenX / screenW;
    float y1 = (glHeight / 2.f) - (ViewMatrix.m[0][1] * pos.X + ViewMatrix.m[1][1] * pos.Y + ViewMatrix.m[2][1] * (pos.Z - 95) + ViewMatrix.m[3][1]) * (glHeight / 2.f) / screenW;
    screen.Z = y1 - screen.Y;

    return !(screen.X == 0 && screen.Y == 0 && screen.Z == 0);
}

bool WorldToScreenBone(FVector Position, FVector2D *Screen)
{
    Matrix ViewMatrix = GetMatrix();

    float ScreenW = (ViewMatrix.m[0][3] * Position.X) + (ViewMatrix.m[1][3] * Position.Y) + (ViewMatrix.m[2][3] * Position.Z + ViewMatrix.m[3][3]);
    if (ScreenW < 0.0001f)
        return false;

    ScreenW = 1 / ScreenW;
    float SightX = (glWidth / 2);
    float SightY = (glHeight / 2);

    Screen->X = SightX + (ViewMatrix.m[0][0] * Position.X + ViewMatrix.m[1][0] * Position.Y + ViewMatrix.m[2][0] * Position.Z + ViewMatrix.m[3][0]) * ScreenW * SightX;
    Screen->Y = SightY - (ViewMatrix.m[0][1] * Position.X + ViewMatrix.m[1][1] * Position.Y + ViewMatrix.m[2][1] * Position.Z + ViewMatrix.m[3][1]) * ScreenW * SightY;

    return true;
}

static char path[200];
static int currentItem = 0;

FVector operator*(const FVector &vector, float scalar)
{
    return FVector({vector.X * scalar, vector.Y * scalar, vector.Z * scalar});
}

/*int32_t (*orig_ANativeWindow_getWidth)(ANativeWindow *window);
int32_t _ANativeWindow_getWidth(ANativeWindow *window)
{
    screenWidth = orig_ANativeWindow_getWidth(window);
    return orig_ANativeWindow_getWidth(window);
}

void (*orig_onInputEvent)(void *thiz, void *ex_ab, void *ex_ac);
void onInputEvent(void *thiz, void *ex_ab, void *ex_ac)
{
    orig_onInputEvent(thiz, ex_ab, ex_ac);
    if (initImGui)
    {
        ImGui_ImplAndroid_HandleInputEvent((AInputEvent *)thiz, {(float)screenWidth / (float)glWidth, (float)screenHeight / (float)glHeight});
    }
    return;
}

int32_t (*orig_ANativeWindow_getHeight)(ANativeWindow *window);
int32_t _ANativeWindow_getHeight(ANativeWindow *window)
{
    screenHeight = orig_ANativeWindow_getHeight(window);
    return orig_ANativeWindow_getHeight(window);
}*/
//=====Aiming======//
/*
bool isInsideFOVs(int x, int y) {
    if (!Config.SilentAim.Cross)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Config.SilentAim.Cross*0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}*/

auto GetTargetForCross() {
   ASTExtraPlayerCharacter *result = 0;
	float max = std::numeric_limits<float>::infinity();
	auto Actors = getActors();
	auto localPlayer = g_LocalPlayer;
	auto localController = g_LocalController;
	if (localPlayer)
	{
		for (auto Actor : Actors)
		{
			if (isObjectInvalid(Actor))
				continue;
			if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
			{
			
			     auto Player = (ASTExtraPlayerCharacter *)Actor;
                auto Target = (ASTExtraPlayerCharacter *) Actor;

               float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
               if (dist > Config.Meter)
                    continue;

			
			if (Player->PlayerKey == localPlayer->PlayerKey)
					continue;
				if (Player->TeamID == localPlayer->TeamID)
					continue;
				if (Player->bDead)
					continue;
					
					
                              if (Config.SilentAim.IgnoreKnocked) {
                            if (Player->Health == 0.0f)
                                continue;
                        }


                        if (Config.SilentAim.VisCheck) {
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                                continue;
                        }
                        if (Config.SilentAim.IgnoreBots) {
                            if (Player->bEnsure)
                                continue;
                        }

                auto Root = Player->GetBonePos("Root", {});
				auto Head = Player->GetBonePos("Head", {});
				FVector2D RootSc, HeadPosSC;
				if (W2S(Root, &RootSc) && W2S(Head, &HeadPosSC))
				{
					float height = abs(HeadPosSC.Y - RootSc.Y);
					float width = height * 0.20f;

					FVector middlePoint = {HeadPosSC.X + (width / 2), HeadPosSC.Y + (height / 2), 0};
					if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight))
					{
						FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
						FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
						
						
                //                if(isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y)) {

                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Player;
                                }
                              }
                            }
                        }
                    
                
            }
        }
    

    return result;
}


bool isInsideFOVs(int x, int y)
{
    if (!Config.AimBot.Enable)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Config.AimBot.Cross * 0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

auto GetTargetForAimBot()
{
    ASTExtraPlayerCharacter *result = nullptr;
    float max = std::numeric_limits<float>::infinity();
    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
    if (localPlayer)
    {
        for (int i = 0; i < Actors.size(); i++)
        {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
            {
                auto Player = (ASTExtraPlayerCharacter *)Actor;

                float dist = localPlayer->GetDistanceTo(Player) / 100.0f;
                if (dist > Config.Meter)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;
                if (Player->TeamID == localPlayer->TeamID)
                    continue;
                if (Player->bDead)
                    continue;

                if (Config.AimBot.IgnoreKnock)
                {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.AimBot.VisCheck)
                {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                    if (Config.AimBot.IgnoreBot) {
                    if (Player->bEnsure)
                        continue;
				}

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc))
                {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.20f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                        (middlePoint.Y >= 0 && middlePoint.Y <= glHeight))
                    {
                        FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                        if (isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y))
                        {
                            float dist = FVector2D::Distance(v2Middle, v2Loc);

                            if (dist < max)
                            {
                                max = dist;
                                result = Player;
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
 
const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}






void (*orig_UpdateVolleyShootParameters)(USTExtraShootWeaponComponent *a1, FVector TargetLoc ,FVector* start, FRotator* BulletRot , FVector* BulletDir);
void UpdateVolleyShootParameters(USTExtraShootWeaponComponent *a1 , FVector TargetLoc ,FVector* start, FRotator* BulletRot , FVector* BulletDir){
    if (Config.SilentAim.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetForCross();
        if (Target) {
            bool triggerOk = false;
            triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;  // Replaced here
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
				
                UShootWeaponEntity *ShootWeaponEntityComponent = a1->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                        float dist = g_LocalPlayer->GetDistanceTo(Target);  // Replaced here
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();
                        float dist = g_LocalPlayer->GetDistanceTo(Target);  // Replaced here
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, *start);
                    FRotator sex = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                    BulletRot->Pitch = sex.Pitch;
                    BulletRot->Yaw = sex.Yaw;
                }
            }
        }
    }
    orig_UpdateVolleyShootParameters(a1, TargetLoc, start, BulletRot, BulletDir);
}


//3D BOX
FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}

void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
   draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 1.0f);
}
bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}


void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, float rounding, int color)
{
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}

void DrawLine(ImDrawList *draw, FVector2D origin, FVector2D dest, ImColor color, float thickness = 3.0f)
{
    draw->AddLine({origin.X, origin.Y}, {dest.X, dest.Y}, color, thickness);
}

void DrawText(ImDrawList *draw, const std::string &text, const FVector2D &position, ImU32 color, float fontSize)
{
    draw->AddText(NULL, fontSize, {position.X, position.Y}, color, text.c_str());
}

void DrawTextWithBorder(ImDrawList *draw, const std::string &text, const FVector2D &position, ImU32 textColor, ImU32 borderColor, float fontSize)
{
    float borderSize = 1.0f;

    for (int x = -1; x <= 1; ++x)
    {
        for (int y = -1; y <= 1; ++y)
        {
            if (x == 0 && y == 0)
                continue;

            DrawText(draw, text, {position.X + x * borderSize, position.Y + y * borderSize}, borderColor, fontSize);
        }
    }
    DrawText(draw, text, position, textColor, fontSize);
}




void Box3D(ImDrawList *draw, FVector origin, Vector3 extends, ImColor col) {
    
    origin.X -= extends.X / 2.f;
    origin.Y -= extends.Y / 2.f;
    origin.Z -= extends.Z / 2.f;
 FVector one = origin;
 FVector two = origin; two.X += extends.X;
 FVector tree = origin; tree.X += extends.X; tree.Y += extends.Y;
 FVector four = origin; four.Y += extends.Y;

 FVector five = one; five.Z += extends.Z;
 FVector six = two; six.Z += extends.Z;
 FVector seven = tree; seven.Z += extends.Z;
 FVector eight = four; eight.Z += extends.Z;

    FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
    if (W2S2(one, &s1) && W2S2(two, &s2) && W2S2(tree, &s3) && W2S2(four, &s4) &&
    W2S2(five, &s5) && W2S2(six, &s6) && W2S2(seven, &s7) && W2S2(eight, &s8))
    {
        
    Line(draw,s1, s2, col);
    Line(draw,s2, s3, col);
    Line(draw,s3, s4, col);
    Line(draw,s4, s1, col);
 
    Line(draw,s5, s6, col);
    Line(draw,s6, s7, col);
    Line(draw,s7, s8, col);
    Line(draw,s8, s5, col);
 
    Line(draw,s1, s5, col);
    Line(draw,s2, s6, col);
    Line(draw,s3, s7, col);
    Line(draw,s4, s8, col);

}  
}


//FPSCounter fps;
#include <string>

std::string exec(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }

    if (!result.empty() && result[result.size() - 1] == '\n') {
        result.erase(result.size() - 1);
    }
    return result;
}

std::string getDeviceProperty(const std::string& property) {
    std::string command = "getprop " + property;
    return exec(command.c_str());
}


int SCOLOR, CounterColorByNHKMOD;








void DrawESP(ImDrawList *draw) {
	

draw->AddText({((float) density / 08.0f), 18}, IM_COL32(0, 255, 0, 255),
"                               	          PLAY SAFE AVOID REPORTS");


	
	
	
ImGui::PushFontShadow(0xFF000000);
if (!g_Token.empty() && !g_Auth.empty() && g_Token == g_Auth) {
	
	auto Actors = getActors();

    int totalEnemies = 0, totalBots = 0;

    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;






    for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
            continue;

        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
            localController = (ASTExtraPlayerController *) Actor;
            break;
        }
    }

    if (localController) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

              if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
                    localPlayer = (ASTExtraPlayerCharacter *) Actor;
                    break;
                }
            }
        }

        if (localPlayer) {
            if (localPlayer->PartHitComponent) {
                auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                    ConfigCollisionDistSqAngles[j].Angle = 180.0f;
                }
                localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
            }

                    static bool bShooting = false;
					
					
					
					if (Config.SilentAim.Enable)
        {
            draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.SilentAim.Fov * 0.5f, IM_COL32(255, 255, 0, 255), 100, 1.5f);
        }
		
		if (Config.SilentAim.Enable) {
    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
    if (WeaponManagerComponent) {
        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
        if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3) {
            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
            if (CurrentWeaponReplicated) {
                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                if (ShootWeaponComponent) {
                    int shoot_event_idx = 157; // UpdateVolleyShootParameters function index
                    auto VTable = (void **)ShootWeaponComponent->VTable;
                    
                    // Lambda function to change memory protection
                    auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
                        size_t page_size = sysconf(_SC_PAGESIZE); // Get system's page size
                        void* start = reinterpret_cast<void*>(addr & ~(page_size - 1)); // Align the start address
                        uintptr_t end = (addr + len + page_size - 1) & ~(page_size - 1); // Align the end address
                        return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
                    };

                    if (VTable && (VTable[shoot_event_idx] != UpdateVolleyShootParameters)) {
                        orig_UpdateVolleyShootParameters = decltype(orig_UpdateVolleyShootParameters)(VTable[shoot_event_idx]);
                        
                        // Call mprotect to change memory protection to allow write access
                        f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
                        
                        // Override VTable entry
                        VTable[shoot_event_idx] = (void *)UpdateVolleyShootParameters;
                        
                        // Restore memory protection
                        f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ);
                    }
                }
            }
        }
    }
}
		
		
		

		
			if (Config.AimBot.Enable) {
                    draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.AimBot.Cross*0.5f, IM_COL32(0, 255, 0, 255), 100, 1.0f);
                    ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
                    if (Target) {
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::Any) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = localPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
								
                                triggerOk = localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = localPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::None) {
                                triggerOk = localPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        if (triggerOk) {
                            FVector targetAimPos = Target->GetBonePos("Head", {});
                                targetAimPos.Z -= Config.AimBot.Position;

                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int) propSlot.GetValue() >= 1 &&
                                    (int) propSlot.GetValue() <= 3) {
                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                    if (CurrentWeaponReplicated) {
                                        auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                        if (ShootWeaponComponent) {
                                            UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                            if (ShootWeaponEntityComponent) {
                                                ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                                if (CurrentVehicle) {
                                                    FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    LinearVelocity, timeToTravel));
                                                } else {
                                                    FVector Velocity = Target->GetVelocity();

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    Velocity, timeToTravel));
                                                }
                                                  if (Config.AimBot.RecoilControl) {
                                                    if (g_LocalPlayer->bIsGunADS) {
                                                        if (g_LocalPlayer->bIsWeaponFiring) {
                                                            float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                                            targetAimPos.Z -= dist * Config.AimBot.RecoilSet;
                                                        }  
                                                    }
                                                }   
                                                localController->SetControlRotation(ToRotator(
                                                        localController->PlayerCameraManager->CameraCache.POV.Location,
                                                        targetAimPos), "");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }          
     
				 
				 
				 
				
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				     if (Config.autowalljump)
               {
                   UCharacterMovementComponent *CharacterMovement = localPlayer->CharacterMovement;
                   if (CharacterMovement)
                   {
                       CharacterMovement->MaxStepHeight = 799.9f;
                   }
               }

                FVector ViewPosY{0, 0, 0};
                        if (localPlayer) {
                        ViewPosY = localPlayer->GetBonePos("Head", {});
                        ViewPosY.Z += 360.f;
                         } 
            
				
						 
						 
						 
						 
						 
						 
						 
						 
						 for (int i = 0; i < Actors.size(); i++) {
                      auto Actor = Actors[i];
                     if (isObjectInvalid(Actor)) continue;

              if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *)Actor;
                 if (isObjectInvalid(Player)) continue;

                  long SCOLOR2 = IM_COL32(245, 233, 0, 255);
                  long SCOLORA = IM_COL32(255, 0, 0, 255);
                  long SCOLOR = IM_COL32(0, 255, 0, 255);
                  long SCOLOR1 = IM_COL32(255, 255, 255, 255);

                  long PlayerBoxClrCf = IM_COL32(0, 255, 0, 255);
                  long PlayerBoxClrCfline = IM_COL32(0, 255, 0, 255);
                  long PlayerBoxClrCfbx = IM_COL32(0, 255, 0, 255);

        if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
            SCOLORA = IM_COL32(255, 0, 0, 255);
            SCOLOR = SCOLOR1 = IM_COL32(255, 0, 0, 255);

            PlayerBoxClrCf = PlayerBoxClrCfline = PlayerBoxClrCfbx = IM_COL32(0, 255, 0, 255);
        }

        float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
        if (Distance > 500.0f) continue;
        if (Player->PlayerKey == localController->PlayerKey || Player->TeamID == localController->TeamID || Player->bDead || !Player->RootComponent) continue;

        int Colorhealth, healthOutline, radarcolor, ColorEspAlert, alertcol;
        if (Player->bEnsure) {
            totalBots++;
            Colorhealth = IM_COL32(0, 255, 0, 120);
            ColorEspAlert = IM_COL32(154, 255, 60, 225);
            healthOutline = radarcolor = alertcol = IM_COL32(154, 255, 60, 255);
        } else {
            totalEnemies++;
            Colorhealth = IM_COL32(255, 0, 255, 120);
            ColorEspAlert = IM_COL32(171, 0, 169, 225);
            healthOutline = radarcolor = IM_COL32(154, 255, 60, 255);
            alertcol = IM_COL32(255, 0, 255, 200);
        }

        if (Config.NoBot && Player->bEnsure) continue;

        auto HeadPos = Player->GetBonePos("Head", {});
        ImVec2 HeadPosSC;

        FVector ViewPosY{0, 0, 0};
        if (localPlayer) {
            ViewPosY = localPlayer->GetBonePos("Head", {});
            ViewPosY.Z += 10.f;
        }

        
        auto upper_r = Player->GetBonePos("upperarm_r", {});
        auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
        auto hand_r = Player->GetBonePos("hand_r", {});
        auto upper_l = Player->GetBonePos("upperarm_l", {});
        auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
        auto hand_l = Player->GetBonePos("hand_l", {});
        auto thigh_l = Player->GetBonePos("thigh_l", {});
        auto calf_l = Player->GetBonePos("calf_l", {});
        auto foot_l = Player->GetBonePos("foot_l", {});
        auto thigh_r = Player->GetBonePos("thigh_r", {});
        auto calf_r = Player->GetBonePos("calf_r", {});
        auto foot_r = Player->GetBonePos("foot_r", {});
        auto neck_01 = Player->GetBonePos("neck_01", {});
        auto pelvis = Player->GetBonePos("pelvis", {});
        auto RootPos = Player->GetBonePos("Root", {});

        ImVec2 upper_rPoSC, lowerarm_rPoSC, hand_rPoSC, upper_lPoSC, lowerarm_lPoSC, hand_lPoSC, thigh_lPoSC, calf_lPoSC, foot_lPoSC, thigh_rPoSC, calf_rPoSC, foot_rPoSC, neck_01PoSC, pelvisPoSC, RootPosSC;

        if (W2S(HeadPos, (FVector2D*)&HeadPosSC) &&
            W2S(upper_r, (FVector2D*)&upper_rPoSC) &&
            W2S(upper_l, (FVector2D*)&upper_lPoSC) &&
            W2S(lowerarm_r, (FVector2D*)&lowerarm_rPoSC) &&
            W2S(hand_r, (FVector2D*)&hand_rPoSC) &&
            W2S(lowerarm_l, (FVector2D*)&lowerarm_lPoSC) &&
            W2S(hand_l, (FVector2D*)&hand_lPoSC) &&
            W2S(thigh_l, (FVector2D*)&thigh_lPoSC) &&
            W2S(calf_l, (FVector2D*)&calf_lPoSC) &&
            W2S(foot_l, (FVector2D*)&foot_lPoSC) &&
            W2S(thigh_r, (FVector2D*)&thigh_rPoSC) &&
            W2S(calf_r, (FVector2D*)&calf_rPoSC) &&
            W2S(foot_r, (FVector2D*)&foot_rPoSC) &&
            W2S(neck_01, (FVector2D*)&neck_01PoSC) &&
            W2S(pelvis, (FVector2D*)&pelvisPoSC) &&
            W2S(RootPos, (FVector2D*)&RootPosSC)) {
						 
							if (Config.Line) {       // MADE BY @NHKMOD 
                                    draw->AddLine({(float) glWidth / 2, 70}, ImVec2(HeadPosSC.x, HeadPosSC.y - 30.0f),
                                                  SCOLOR2, 0.6f);   // MADE BY @NHKMOD 
                                }
                              if (Config.Box) {
                                float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                    float boxWidth = boxHeight * 0.65f;
                                    ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y};
                                    ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};

                                    draw->AddRect(vStart, vEnd, SCOLOR, 0.0f, 240, 1.2f);
                                    
                                    auto tpColor = ImColor(255, 255, 255,30);
                                    auto bttomColor = ImColor(0, 175, 239, 30);
                                    auto tpoColor = ImColor(255, 0, 0,30);
                                    auto btotomColor = ImColor(255, 255, 255,30);
                                    draw->AddRectFilledMultiColor(vStart, vEnd, tpColor, tpoColor, btotomColor, bttomColor);

                                    }
                                    
                            if (Config.Skeleton) {
                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, neck_01PoSC, SCOLOR2, 1.5f);
                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, neck_01PoSC, SCOLOR2, 1.5f);

                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, lowerarm_rPoSC, SCOLOR2, 1.5f);
                                draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_rPoSC, SCOLOR2 , 1.5f);

                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, lowerarm_rPoSC, SCOLOR2, 1.5f);
                                draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_lPoSC, SCOLOR2, 1.5f);

                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, thigh_lPoSC, SCOLOR2, 1.5f);

                                draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y}, calf_lPoSC, SCOLOR2, 1.5f);
                                draw->AddLine({calf_lPoSC.x, calf_lPoSC.y}, foot_lPoSC, SCOLOR2, 1.5f);

                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, calf_rPoSC, SCOLOR2, 1.5f);
                                draw->AddLine({calf_rPoSC.x, calf_rPoSC.y}, foot_rPoSC, SCOLOR2, 1.5f);

                                draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, pelvisPoSC, SCOLOR2, 1.5f);
                                draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, HeadPosSC, SCOLOR2, 1.5f);

                                }
                                
                                if (Config.Health || Config.Name || Config.TeamID) {
                                draw->AddRectFilled({HeadPosSC.x - 95, HeadPosSC.y - 58}, {HeadPosSC.x + 80,HeadPosSC.y - 29}, GetRandomColorByIndex(Player->TeamID), 1, 0);
                                }
                
                            if (Config.Health) {                                                   
                                int CurHP = (int) std::max(0, std::min((int) Player->Health,100));
                                int MaxHP = 100;
                                long Fuck = IM_COL32(0, 255, 0, 200);
                                draw->AddRectFilled({HeadPosSC.x - 95, HeadPosSC.y - 26 - 7 }, {HeadPosSC.x - 110 + (1.9 * CurHP), HeadPosSC.y - 29.2},Fuck, 1, 0);
                                if (Player->Health == 0.0f && !Player->bDead) {
                                CurHP = Player->NearDeathBreath;
                                if (Player->NearDeatchComponent) {
                                MaxHP = 100;// Player->NearDeatchComponent->BreathMax;
                                }}}


                            if (Config.TeamID) {                              
                                std::string s;
                                auto textSize = ImGui::CalcTextSize(s.c_str(), 0);     
                                if(Player->TeamID < 10 ){
                                s +=" 0";
                                s += std::to_string(Player->TeamID);
                                draw->AddText(NHKModFont ,15,ImVec2(HeadPosSC.x - 92  - 1 - (textSize.x / 2), HeadPosSC.y - 60.5 + 9), IM_COL32(255, 255, 255, 255),s.c_str());
                                }
                                else if(Player->TeamID < 100){
                                s+=" ";
                                s += std::to_string(Player->TeamID);
                                draw->AddText(NHKModFont ,15 ,ImVec2(HeadPosSC.x - 91 - (textSize.x / 2), HeadPosSC.y - 60.5 + 9), IM_COL32(255, 255, 255, 255),s.c_str());                               
                                }   else {
                                s += std::to_string(Player->TeamID);
                                draw->AddText(NHKModFont ,15,ImVec2(HeadPosSC.x - 92  - 1 - (textSize.x / 2), HeadPosSC.y - 60.5 + 9), IM_COL32(255, 255, 255, 255),s.c_str());
                                }}
                            
                                 if (Config.Name) {                   
                                std::string s;                                                  
                                if (Player->bEnsure) {                              
                                s += " ";                                                           
                                s += "Bot";                           
                                } else {                      
                                s += Player->PlayerName.ToString();         
                                }
                                draw->AddText(NHKModFont,15.f,ImVec2(HeadPosSC.x - 50 - 6, HeadPosSC.y - 55.9 + 4), IM_COL32(255, 255, 255, 255),s.c_str());
                                }             
                                
                                 if (Config.Distance) {
                                    float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                    float boxWidth = boxHeight * 0.65f;
                                    std::string s;
                                    if (Config.Distance) {
                                        if (!s.empty()) {
                                            s += " ";
                                        }
                                        s += std::to_string((int) Distance);
                                        s += "M";
                                    }
                                auto textSize = ImGui::CalcTextSize(s.c_str(), 0);     
                                draw->AddText(NHKModFont ,15,ImVec2(HeadPosSC.x - 92  + 164 - (textSize.x / 2), HeadPosSC.y - 60.5 + 9), IM_COL32(255, 255, 255, 255),s.c_str());
                                }
                            }
                         }
				 

                             if (End)
{
 if (Actor->IsA(ASTExtraGameStateBase::StaticClass()))
 {
 auto InGame = (ASTExtraGameStateBase *)Actor;
 std::string s;
 if ((int)InGame->AliveTeamNum == 1)
 {
 std::vector<std::string> lines = {
 OBFUSCATE("Ajj ka chikkan vip mod ka sath #1")};

 float textPosY = 420; 
 for (const auto &line : lines)
 {
 auto textSize = ImGui::CalcTextSize(line.c_str(), 0, line.size());
 float textPosX = (glWidth - textSize.x) / 2;
 draw->AddText(NULL, ((float)density / 12.0f), ImVec2(textPosX, textPosY), IM_COL32(255, 255, 0, 255), line.c_str());
 textPosY += textSize.y + 25; 
 }
 }
 }
}                                                    
              
                                    if (Actors[i]->IsA(APickUpWrapperActor::StaticClass())) {
                                        auto PickUp = (APickUpWrapperActor *) Actors[i];
                                        if (Items[PickUp->DefineID.TypeSpecificID]) {
                                            auto RootComponent = PickUp->RootComponent;
                                            if (!RootComponent)
                                                continue;

                                            float Distance =
                                                    PickUp->GetDistanceTo(localPlayer) / 100.f;

                                            FVector2D itemPos;
                                            if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                                                std::string s;
                                                uint32_t tc = 0xFF000000;

                                                for (auto &category : items_data) {
                                                    for (auto &item : category["Items"]) {
                                                        if (item["itemId"] ==
                                                            PickUp->DefineID.TypeSpecificID) {
                                                            s = item["itemName"].get<std::string>();
                                                            tc = strtoul(
                                                                    item["itemTextColor"].get<std::string>().c_str(),
                                                                    0,
                                                                    16);
                                                            break;
                                                        }
                                                    }
                                                }

                                                s += " - ";
                                                s += std::to_string((int) Distance);
                                                s += "m";

                                                draw->AddText2(NULL, ((float) density / 25.0f),
                                                              {itemPos.X, itemPos.Y},
                                                              tc, s.c_str());
                                            }
                                        }
                                    }//Item's Esp End
                                    
                                    
                             }
                           }//localplayer
						    
           g_LocalController = localController;
g_LocalPlayer = localPlayer;

ImGuiStyle &style = ImGui::GetStyle();
ImVec4 savedTextColor = style.Colors[ImGuiCol_Text];
style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
std::string s;
//  draw->AddText(NULL, ((float) density / 15.0f), {((float) glWidth / 2) - (textSize.x / 2), 90}, IM_COL32(255, 255, 0, 255), credit.c_str());
style.Colors[ImGuiCol_Text] = savedTextColor;
if (totalEnemies > 0 || totalBots > 0){
    s += " E ";
    s += std::to_string(totalEnemies);
    s += " : ";
    s += " B ";
    s += std::to_string(totalBots);
	
    float new_height = 25;
    float new_width = 103;

    float x1 = glWidth / 2 - new_width / 2;
    float y1 = 70;
    float x2 = glWidth / 2 + new_width / 2;
    float y2 = y1 + new_height;
    
    if (totalEnemies == 0){
    draw->AddRectFilled(ImVec2(x1, y1), ImVec2(x2, y2), IM_COL32(155, 4, 219, 255), 0.0f);
	} else {
    draw->AddRectFilled(ImVec2(x1, y1), ImVec2(x2, y2), IM_COL32(255, 0, 0, 255), 0.0f);
	}
    draw->AddText(NHKModFont, ((float)density / 18.5f), ImVec2(x1 + 9 - 8, y1 + 5 - 5), IM_COL32(255, 255, 255, 255), s.c_str());
    }}}}
             


// ======================================================================== //

    std::string getClipboardText() {
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
        auto ContextClass = env->FindClass("android/content/Context");
        auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

        auto str = env->NewStringUTF("clipboard");
        auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
        env->DeleteLocalRef(str);

        auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
        auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

        auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
        auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

        auto text = env->CallObjectMethod(clipboardManager, getText);
        if (text) {
            str = (jstring) env->CallObjectMethod(text, toStringMethod);
            result = env->GetStringUTFChars(str, 0);
            env->DeleteLocalRef(str);
            env->DeleteLocalRef(text);
        }

        env->DeleteLocalRef(CharSequenceClass);
        env->DeleteLocalRef(ClipboardManagerClass);
        env->DeleteLocalRef(clipboardManager);
        env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();

    return result;
}


const char *GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct {
    char *memory;
    size_t size;
};
static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *) userp;

    mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
    if (mem->memory == NULL) {
        return 0;
    }

    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

  
    std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    vm->DetachCurrentThread();

        std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
//Login
    if (curl) {                           
        std::string BHATIA = OBFUSCATE ("https://connect");
        curl_easy_setopt(curl, CURLOPT_URL ,BHATIA.c_str());

        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
					
									
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    //   expiredDate = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*ts*/ StrEnc("4`", "\x40\x13", 2).c_str()].get<std::string>();
                    //  modStatus = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*ms*/ StrEnc("#e", "\x4E\x16", 2).c_str()].get<std::string>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                       auth += "Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E";
                       // auth += "Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E ";/*StrEnc("ZD$_K NtaM8Fu=n0fFyO;!Ae<H)*Gy4%", "\x0C\x29\x1C\x13\x20\x17\x1B\x1E\x53\x07\x55\x35\x1F\x7E\x3E\x66\x36\x10\x13\x3D\x77\x40\x76\x1F\x5B\x2E\x51\x19\x32\x03\x0D\x60", 32).c_str();*/
                        std::string outputAuth = Tools::CalcMD5(auth);
                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;

                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);
    vm->DetachCurrentThread();

    return bValid ? "OK" : errMsg;
}


// ======================================================================== //

#define IM_CLAMP(V, MN, MX)     ((V) < (MN) ? (MN) : (V) > (MX) ? (MX) : (V))
namespace Settings
{
    static int Tab = 1;
}


// ======================================================================== //

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
if (glWidth <= 0 || glHeight <= 0)
return orig_eglSwapBuffers(dpy, surface);

if (!g_App)
return orig_eglSwapBuffers(dpy, surface);

screenWidth = ANativeWindow_getWidth(g_App->window);
screenHeight = ANativeWindow_getHeight(g_App->window);
density = AConfiguration_getDensity(g_App->config);

// ======================================================================== //
	
if (!initImGui) {
	
	
	// Create ImGui context
ImGui::CreateContext();

// Use light style as the base
ImGui::StyleColorsLight();

// Access the current style
ImGuiStyle& style = ImGui::GetStyle();

// Customize style properties
//style.WindowRounding = 1.0f;
style.FramePadding = ImVec2(8, 5);
//style.FrameRounding = 1.0f;
style.FrameBorderSize = 1.0f;
style.WindowBorderSize = 1.0f;
        style.FrameRounding = 4.0f;
        style.WindowRounding = 10.0f;
/*
style.WindowTitleAlign = ImVec2(0.5, 0.5);
style.ButtonTextAlign = ImVec2(0.5, 0.5);
*/

// **Color Customizations: Changing from White & Black to Red & Yellow**
style.Colors[ImGuiCol_Text]                   = ImColor(0, 0, 0, 255);
    style.Colors[ImGuiCol_TextDisabled]           = ImColor(0, 0, 0, 255);
    style.Colors[ImGuiCol_WindowBg]               = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_ChildBg]                = ImColor(255, 255, 255, 0);
    style.Colors[ImGuiCol_PopupBg]                = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_Border]                 = ImColor(255, 255, 255, 255);
    style.Colors[ImGuiCol_BorderShadow]           = ImColor(255, 255, 255, 255);
    style.Colors[ImGuiCol_FrameBg]                = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_FrameBgHovered]         = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_FrameBgActive]          = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TitleBg]                = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TitleBgActive]          = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TitleBgCollapsed]       = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_MenuBarBg]              = ImColor(0, 0, 0, 0);
    style.Colors[ImGuiCol_ScrollbarBg]            = ImColor(0, 0, 0, 0);
    style.Colors[ImGuiCol_ScrollbarGrab]          = ImColor(0, 0, 0, 0);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]   = ImColor(0, 0, 0, 0);
    style.Colors[ImGuiCol_ScrollbarGrabActive]    = ImColor(0, 0, 0, 0);
    style.Colors[ImGuiCol_CheckMark] = ImColor(255, 0, 0, 255); // red
    style.Colors[ImGuiCol_SliderGrab]             = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_SliderGrabActive]       = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_Button]                 = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_ButtonHovered]          = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_ButtonActive]           = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_Header]                 = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_HeaderHovered]          = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_HeaderActive]           = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_Separator]              = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_SeparatorHovered]       = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_SeparatorActive]        = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_ResizeGrip]             = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_ResizeGripHovered]      = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_ResizeGripActive]       = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_Tab]                    = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TabHovered]             = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TabActive]              = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TabUnfocused]           = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TabUnfocusedActive]     = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_PlotLines]              = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_PlotLinesHovered]       = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_PlotHistogram]          = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_PlotHistogramHovered]   = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TableHeaderBg]          = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TableBorderStrong]      = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TableBorderLight]       = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TableRowBg]             = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TableRowBgAlt]          = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_TextSelectedBg]         = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_DragDropTarget]         = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_NavHighlight]           = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_NavWindowingHighlight]  = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_NavWindowingDimBg]      = ImColor(255, 255, 255, 155);
    style.Colors[ImGuiCol_ModalWindowDimBg]       = ImColor(255, 255, 255, 155);

// Scale all sizes if necessary
/*    style->WindowTitleAlign = ImVec2(0.5f, 0.5f) ;
        style->ScaleAllSizes(std::max(1.0f, density / 180.0f));
        style->ScrollbarSize *= 0.7f;
        style->style.Colors[ImGuiCol_ChildBg]                           = ImColor(138, 165, 184);
*/

// Initialize ImGui for Android and OpenGL3
ImGui_ImplAndroid_Init();
ImGui_ImplOpenGL3_Init(OBFUSCATE("#version 300 es"));

        ImGuiIO &io = ImGui::GetIO();

        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;

		//io.Fonts->AddFontFromMemoryTTF((void *)BaiduZY_data, BaiduZY_size, 20.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
        ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 20.0f);
        io.Fonts->AddFontDefault(&cfg);

        memset(&Config, 0, sizeof(sConfig));
		
// ===============================ESPCOLOR ================================== //

  Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
		 Config.ColorsESP.Line1 = CREATE_COLOR(255, 255, 255, 255);
		 Config.ColorsESP.Linebot = CREATE_COLOR(255, 0, 0, 255);
		 Config.ColorsESP.Linebot1 = CREATE_COLOR(255, 255, 255, 255);
		 Config.ColorsESP.Skeletonbot = CREATE_COLOR(255, 255, 255, 255);
	     Config.ColorsESP.Boxbot = CREATE_COLOR(255, 255, 255, 255);
         Config.ColorsESP.Box = CREATE_COLOR(255, 0, 0, 255);
         Config.ColorsESP.Name = CREATE_COLOR(255, 0, 0, 255);
         Config.ColorsESP.Distance = CREATE_COLOR(255, 0, 255, 255);
         Config.ColorsESP.Skeleton = CREATE_COLOR(255, 0, 0, 255);
         Config.ColorsESP.Vehicle = CREATE_COLOR(255, 0, 0, 255);
       // Config.ColorsESP.Items = CREATE_COLOR(255, 255, 255, 255);
	     Config.ColorsESP.Fov = CREATE_COLOR(255, 255, 255, 255);
         Config.ColorsESP.aimbot  = CREATE_COLOR(255, 255, 255, 255);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
		initImGui = true;
		
            for (auto &i : items_data) {
            for (auto &item : i["Items"]) {
                int r, g, b;
                sscanf(item["itemTextColor"].get<std::string>().c_str(), "#%02X%02X%02X", &r, &g, &b);
                ItemColors[item["itemId"].get<int>()] = CREATE_COLOR(r, g, b, 255);
            }
        }
        initImGui = true;
        g_Token = "bypass";
        g_Auth = "bypass";
		//Config.Logo = true;
	

    }
	
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
    ImGuiIO &io = ImGui::GetIO();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
    ImGui::NewFrame();
    DrawESP(ImGui::GetBackgroundDrawList());
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	
ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.60f), ImGuiCond_Once); // 45% width 70% height

if (ImGui::Begin(" Join For More @Private_Src_Files ", nullptr, ImGuiWindowFlags_NoFocusOnAppearing)) {
    // Content rendering starts here
    
    static bool isLogin = true;
    static std::string err;

    if (!isLogin) {
        static char s[64];
        ImGui::InputText("##key", s, sizeof s);
        auto key = getClipboardText();
        strncpy(s, key.c_str(), sizeof s);

        err = Login(s);
        if (err == "OK") {
            isLogin = true;
            isLogin = bValid && g_Auth == g_Token;
        }
        if (!err.empty() && err != "OK") {
            ImGui::Text("Error: %s", err.c_str());
        }
    } else { 
        if (!g_Token.empty() && !g_Auth.empty() && g_Token == g_Auth) {                        
            if (ImGui::BeginTable("split", 2)) {
             
                ImGui::TableNextColumn();
                ImGui::Checkbox("Line", &Config.Line);
                ImGui::TableNextColumn();
                ImGui::Checkbox("Box", &Config.Box);
                ImGui::TableNextColumn();
                ImGui::Checkbox("Skeleton", &Config.Skeleton);
                ImGui::TableNextColumn();
                ImGui::Checkbox("Name", &Config.Name);
                ImGui::TableNextColumn();
                ImGui::Checkbox("Health", &Config.Health);
                ImGui::TableNextColumn();
                ImGui::Checkbox("Distance", &Config.Distance);
                ImGui::TableNextColumn();
                ImGui::Checkbox("Team ID", &Config.TeamID);
                ImGui::EndTable();

                ImGui::Spacing();
                Config.AimBot.RecoilControl = true;
                Config.AimBot.Cross = 300.0f;
                Config.Meter = 150.0f;
                Config.AimBot.RecoilSet = 1.43f;

                ImGui::Separator();
                ImGui::Checkbox("Powerful aimbot",  &Config.AimBot.Enable);

                ImGui::Text("Target     : ");
                ImGui::SameLine();
                static const char *targets[] = {"Head", "Boobs"};
                ImGui::Combo("##Target", (int *) &Config.AimBot.Target, targets, 2, -1);

                ImGui::Text("Trigger    : ");
                ImGui::SameLine();
                static const char *triggers[] = {"Shooting", "None", "Scoping", "Both (Shooting & Scoping)", "Any (Shooting / Scoping)"};
                ImGui::Combo("##Trigger", (int *) &Config.AimBot.Trigger, triggers, 5, -1);

                ImGui::Checkbox("Ignore Knocked", &Config.AimBot.IgnoreKnock);
                ImGui::Checkbox("Visibility Check", &Config.AimBot.VisCheck);
                ImGui::Checkbox("Ignore Bot", &Config.AimBot.IgnoreBot);

                if (Config.SilentAim.Enable){
                  /*  Config.SilentAim.IgnoreKnocked = true;
                    Config.SilentAim.VisCheck = true;
                    Config.Meter = 100.0f;*/
                }
            }
        }
    }
}
    ImGui::End();



    ImGui::Render();
	

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

return orig_eglSwapBuffers(dpy, surface);
}

    int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

    int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
        if (initImGui) {
            ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
        }
        return orig_onInputEvent(app, inputEvent);
    }


void FixGameCrash()
{
    system("rm -rf /data/data/com.pubg.imobile/files");
    system("rm -rf /data/data/com.pubg.imobile/files/ano_tmp");
    system("touch /data/data/com.pubg.imobile/files/ano_tmp");
    system("chmod 000 /data/data/com.pubg.imobile/files/ano_tmp");
    system("rm -rf /data/data/com.pubg.imobile/files/obblib");
    system("touch /data/data/com.pubg.imobile/files/obblib");
    system("chmod 000 /data/data/com.pubg.imobile/files/obblib");
    system("rm -rf /data/data/com.pubg.imobile/files/xlog");
    system("touch /data/data/com.pubg.imobile/files/xlog");
    system("chmod 000 /data/data/com.pubg.imobile/files/xlog");
    system("rm -rf /data/data/com.pubg.imobile/app_bugly");
    system("touch /data/data/com.pubg.imobile/app_bugly");
    system("chmod 000 /data/data/com.pubg.imobile/app_bugly");
    system("rm -rf /data/data/com.pubg.imobile/app_crashrecord");
    system("touch /data/data/com.pubg.imobile/app_crashrecord");
    system("chmod 000 /data/data/com.pubg.imobile/app_crashrecord");
    system("rm -rf /data/data/com.pubg.imobile/app_crashSight");
    system("touch /data/data/com.pubg.imobile/app_crashSight");
    system("chmod 000 /data/data/com.pubg.imobile/app_crashSight");
}


void *main_thread(void *) {
        
        FixGameCrash();

        UE4 = Tools::GetBaseAddress("libUE4.so");
        while (!UE4){
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
		}
		
        while (!g_App){
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);
		}
        while (!g_App->onInputEvent)
        sleep(1);
        orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
        g_App->onInputEvent = onInputEvent;
	 
        FName::GNames = GetGNames();
        while (!FName::GNames) {
            FName::GNames = GetGNames();
            sleep(1);
        }
        UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

        Tools::Hook((void *) DobbySymbolResolver(OBFUSCATE("/system/lib/libEGL.so"), OBFUSCATE("eglSwapBuffers")), (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);

        pthread_t t;
     
        return nullptr;
    }
    
void *shayk_thread(void *) {	

return NULL;
}

    __attribute__((constructor)) void _init() {
        pthread_t t;
		pthread_t t1;
        pthread_create(&t, NULL, main_thread, NULL);
		pthread_create(&t1, NULL, shayk_thread, NULL);
		
    }
//Join For More @Private_Src_Files
//Join For More @Private_Src_Files
//Join For More @Private_Src_Files
//Join For More @Private_Src_Files
