@class NSString;

@interface SGQuickResponsesEngagementDeltas : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *response;
@property (readonly, nonatomic) NSString *lang;
@property (readonly, nonatomic) int displayed;
@property (readonly, nonatomic) int selected;
@property (readonly, nonatomic) int matched;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLangResponse:(id)a0 displayed:(int)a1 selected:(int)a2 matched:(int)a3;
- (char)isEqualToQuickResponsesEngagementDeltas:(id)a0;

@end
