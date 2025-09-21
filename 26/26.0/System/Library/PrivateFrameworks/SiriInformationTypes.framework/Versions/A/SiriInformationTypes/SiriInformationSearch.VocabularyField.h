@class NSString;

@interface SiriInformationSearch.VocabularyField : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ fieldType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
