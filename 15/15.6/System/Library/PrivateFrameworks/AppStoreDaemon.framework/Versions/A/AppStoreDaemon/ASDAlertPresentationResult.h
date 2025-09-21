@class NSError, NSUUID;

@interface ASDAlertPresentationResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSUUID *selectedActionIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithSelectedActionIdentifier:(id)a0;
- (char)isSelectedAction:(id)a0;

@end
