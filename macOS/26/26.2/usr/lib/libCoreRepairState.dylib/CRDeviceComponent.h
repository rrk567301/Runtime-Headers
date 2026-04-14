@class NSString, NSArray;

@interface CRDeviceComponent : NSObject

@property (retain, nonatomic) NSString *spc;
@property (nonatomic) NSString *locKey;
@property (nonatomic) int type;
@property (retain, nonatomic) NSArray *fdrKeys;
@property (retain, nonatomic) CRDeviceComponent *superModule;
@property (nonatomic) BOOL hasStrongIdentity;

- (void).cxx_destruct;
- (BOOL)_checkStrongIdentity:(id)a0;
- (id)initWithType:(int)a0 locKey:(id)a1;
- (id)initWithType:(int)a0 locKey:(id)a1 spc:(id)a2 fdrKeys:(id)a3;
- (id)initWithType:(int)a0 locKey:(id)a1 spc:(id)a2 fdrKeys:(id)a3 superModule:(id)a4;
- (id)initWithType:(int)a0 locKey:(id)a1 superModule:(id)a2 fdrKeys:(id)a3;

@end
