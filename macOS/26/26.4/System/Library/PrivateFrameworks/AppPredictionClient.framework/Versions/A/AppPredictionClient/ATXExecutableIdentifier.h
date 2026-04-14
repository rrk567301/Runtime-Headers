@class NSString;
@protocol ATXSuggestionExecutableProtocol;

@interface ATXExecutableIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<ATXSuggestionExecutableProtocol> object;
@property (readonly, nonatomic) NSString *debugTitle;

- (id)initWithString:(id)a0;
- (id)initWithInfoSuggestion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAction:(id)a0;
- (id)initWithLinkAction:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithHeroAppPrediction:(id)a0;

@end
