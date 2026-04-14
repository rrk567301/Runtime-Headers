@class NSArray, NSString;

@interface SLShareableContentRepresentationCollection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *representations;
@property (readonly, copy, nonatomic) NSString *suggestedFileName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRepresentations:(id)a0 suggestedFileName:(id)a1;

@end
