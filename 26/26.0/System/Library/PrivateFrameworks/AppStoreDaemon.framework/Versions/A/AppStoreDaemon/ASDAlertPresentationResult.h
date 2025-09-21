@class NSError, NSUUID;

@interface ASDAlertPresentationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSUUID *selectedActionIdentifier;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSelectedActionIdentifier:(id)a0;
- (BOOL)isSelectedAction:(id)a0;

@end
