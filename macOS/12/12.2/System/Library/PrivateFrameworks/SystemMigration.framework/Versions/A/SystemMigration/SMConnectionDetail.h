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
- (id)titleString;
- (id)subTitleString;
- (id)remoteType;
- (void)itemSelected;
- (double)speedRaw;
- (BOOL)fastest;
- (id)connectionIcon;
- (id)localType;
- (id)initName:(id)a0 speedRaw:(double)a1;

@end
