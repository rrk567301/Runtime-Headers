@class NSArray;

@interface SmartReplies.SRSmartRepliesSuggestionResponse : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ suggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *suggestions;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestions:(id)a0;

@end
