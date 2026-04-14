@class NSString, NSMutableDictionary, NSArray, NSBundle;

@interface AXCodeItem : NSObject {
    NSBundle *_cachedBundle;
    struct { unsigned char isDyldOpened : 1; } _flags;
    unsigned long long _loadedAtTimestamp;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableDictionary *platformToTarget;
@property (nonatomic) long long targetType;
@property (nonatomic) unsigned short loadOrder;
@property (retain, nonatomic) NSArray *excludedProcesses;
@property (weak, nonatomic) AXCodeItem *associatedAccessibilityCodeItem;
@property (weak, nonatomic) AXCodeItem *targetCodeItem;
@property (readonly, nonatomic) NSString *debugCodeTypeDescription;
@property (readonly, nonatomic) NSBundle *cachedBundle;
@property (nonatomic) BOOL isLoaded;
@property (readonly, nonatomic) unsigned long long loadedAtTimestamp;
@property (readonly, nonatomic) BOOL isAccessibilityBundle;

+ (id)_codeItemQueue;
+ (long long)codeItemTypeFromString:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 isDyldOpened:(BOOL)a1;
- (id)initAccessibilityCodeItemWithPath:(id)a0 targetType:(long long)a1 platformToTarget:(id)a2 loadOrder:(unsigned short)a3;
- (void)addPlatformToTargetEntries:(id)a0;
- (void)_cacheLazyProperties;
- (BOOL)_isSystemAppAccessibilityBundle;
- (id)prepareBackingBundleIfNeeded:(id *)a0;
- (void)loadWithStrategy:(long long)a0 onQueue:(id)a1 completion:(id /* block */)a2;

@end
