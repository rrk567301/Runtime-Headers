@class NSString;

@interface ASTSessionInfo : NSObject

@property (readonly, nonatomic) BOOL isGuided;
@property (readonly, nonatomic) BOOL isGuidedSessionType;
@property (readonly, nonatomic) NSString *deviceSerialNumber;
@property (readonly, nonatomic) long long sessionType;

- (void).cxx_destruct;
- (id)description;
- (id)_descriptionForSessionType:(long long)a0;
- (id)initWithIsGuided:(BOOL)a0 deviceSerialNumber:(id)a1 sessionType:(long long)a2;

@end
