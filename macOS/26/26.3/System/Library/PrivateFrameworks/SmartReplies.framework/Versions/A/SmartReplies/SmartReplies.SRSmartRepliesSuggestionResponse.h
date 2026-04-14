@class NSArray;

@interface SmartReplies.SRSmartRepliesSuggestionResponse : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ suggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *suggestions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0;

@end
