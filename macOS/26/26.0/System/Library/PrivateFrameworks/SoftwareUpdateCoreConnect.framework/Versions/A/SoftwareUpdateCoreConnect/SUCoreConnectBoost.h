@class NSString;
@protocol NSObject;

@interface SUCoreConnectBoost : NSObject

@property (readonly, nonatomic) NSString *messageClientID;
@property (readonly, nonatomic) NSString *messageName;
@property (retain) id<NSObject> xpcActivityBoost;

- (void)dealloc;
- (void)invalidate;
- (id)initWithMessage:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
