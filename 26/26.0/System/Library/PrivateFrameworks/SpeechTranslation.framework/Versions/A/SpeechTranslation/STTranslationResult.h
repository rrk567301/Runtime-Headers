@class NSUUID, NSString;

@interface STTranslationResult : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ sourceText;
    void /* function */ translatedText;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSUUID *_identifier;
@property (nonatomic, retain) NSUUID *_sourceIdentifier;
@property (nonatomic, copy) NSString *sourceText;
@property (nonatomic, copy) NSString *translatedText;
@property (nonatomic) BOOL isFinal;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *sourceIdentifier;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTranslation:(id)a0 sourceText:(id)a1 isFinal:(BOOL)a2;
- (id)initWithTranslation:(id)a0 sourceText:(id)a1 isFinal:(BOOL)a2 identifier:(id)a3 sourceIdentifier:(id)a4;

@end
