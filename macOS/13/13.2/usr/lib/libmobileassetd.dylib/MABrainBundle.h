@class NSString, NSDictionary;

@interface MABrainBundle : NSObject {
    NSString *_bundlePath;
}

@property (readonly, nonatomic) BOOL isPersonalized;
@property (readonly, nonatomic) BOOL isGloballySigned;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSString *graftPath;
@property (readonly, nonatomic) NSString *cryptexPath;
@property (readonly, nonatomic) NSString *ticketPath;
@property (readonly, nonatomic) NSString *rootHashPath;
@property (readonly, nonatomic) NSString *trustCachePath;
@property (readonly, nonatomic) NSString *brainPath;
@property (readonly, nonatomic) NSDictionary *brainInfo;

+ (void)garbageCollect;
+ (id)currentTargetPath;
+ (id)proposedTargetPath;
+ (BOOL)destageCurrent:(id *)a0;
+ (BOOL)destageProposed:(id *)a0;
+ (BOOL)stageProposed:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (BOOL)personalize:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)graftInfo:(BOOL *)a0 dmgInode:(unsigned long long *)a1 graftPathInode:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)stageCurrent:(id *)a0;
- (BOOL)graft:(id *)a0;
- (BOOL)ungraft:(id *)a0;

@end
