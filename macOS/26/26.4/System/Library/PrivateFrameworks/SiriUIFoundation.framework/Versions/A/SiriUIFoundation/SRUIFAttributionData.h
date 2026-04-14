@class NSArray, NSString, SAUIPluginSnippet;

@interface SRUIFAttributionData : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ cardSections;
    void /* function */ errorMessage;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic, retain) SAUIPluginSnippet *pluginSnippet;
@property (nonatomic, copy) NSArray *cardSections;
@property (nonatomic, copy) NSString *errorMessage;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isError;
- (id)initWithCardSections:(id)a0;
- (BOOL)isPluginSnippet;
- (BOOL)isCardSections;
- (id)initWithPluginSnippet:(id)a0;

@end
