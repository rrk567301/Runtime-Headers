@class HKSource, NSUUID, NSSet;

@interface HKAuthorizationRequestRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) NSSet *typesRequiringShareAuthorization;
@property (readonly, copy, nonatomic) NSSet *typesRequiringReadAuthorization;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0 session:(id)a1 readTypes:(id)a2 writeTypes:(id)a3;

@end
