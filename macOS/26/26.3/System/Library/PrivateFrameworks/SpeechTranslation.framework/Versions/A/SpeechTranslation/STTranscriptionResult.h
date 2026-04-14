@class NSString, NSUUID;

@interface STTranscriptionResult : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ text;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSUUID *_identifier;
@property (nonatomic) BOOL isFinal;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL eligibleForTranslation;

- (id)initWithText:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithText:(id)a0 isFinal:(BOOL)a1;
- (id)cleanedTextVersion;

@end
