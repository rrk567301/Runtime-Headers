@class NSString;
@protocol NSObject;

@interface SUCoreConnectBoost : NSObject

@property (readonly, nonatomic) NSString *messageClientID;
@property (readonly, nonatomic) NSString *messageName;
@property (retain) id<NSObject> xpcActivityBoost;

- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (id)initWithMessage:(id)a0;
- (void)dealloc;

@end
