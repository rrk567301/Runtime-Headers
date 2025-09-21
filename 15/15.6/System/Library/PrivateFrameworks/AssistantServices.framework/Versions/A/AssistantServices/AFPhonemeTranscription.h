@class NSString, NSArray;

@interface AFPhonemeTranscription : NSObject <AFTranscriptionType>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *orthography;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *phonemeSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
