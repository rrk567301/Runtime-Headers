@class NSString;
@protocol ATXSuggestionExecutableProtocol;

@interface ATXExecutableIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<ATXSuggestionExecutableProtocol> object;
@property (readonly, nonatomic) NSString *debugTitle;

- (id)initWithAction:(id)a0;
- (unsigned long long)hash;
- (id)initWithLinkAction:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithInfoSuggestion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHeroAppPrediction:(id)a0;
- (id)init;

@end
