@class NSUUID, NSString;

@interface TUContinuityCall : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSUUID *conversationUUID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 displayName:(id)a1 status:(int)a2 conversationUUID:(id)a3;

@end
