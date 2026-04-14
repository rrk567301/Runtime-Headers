@class NSString;

@interface SMConnectionDetail : NSObject <SMConnectionDisplayable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property BOOL connected;
@property double speedRaw;
@property BOOL fastest;
@property (copy) NSString *sourceName;
@property (copy) NSString *localType;
@property (copy) NSString *remoteType;

- (void).cxx_destruct;
- (BOOL)connected;
- (id)sourceName;
- (id)subTitleString;
- (id)titleString;
- (id)remoteType;
- (void)itemSelected;
- (BOOL)fastest;
- (id)connectionIcon;
- (id)initName:(id)a0 speedRaw:(double)a1;
- (id)localType;
- (double)speedRaw;

@end
