@class NSString, NSArray, NSDictionary, NSURL;

@interface SFRequestParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task;
@property (nonatomic) char narrowband;
@property (copy, nonatomic) NSDictionary *recognitionOverrides;
@property (copy, nonatomic) NSURL *modelOverrideURL;
@property (nonatomic) double maximumRecognitionDuration;
@property (copy, nonatomic) NSURL *dynamicLanguageModel;
@property (copy, nonatomic) NSURL *dynamicVocabulary;
@property (nonatomic) char detectMultipleUtterances;
@property (nonatomic) char onDeviceOnly;
@property (nonatomic) char enableAutoPunctuation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)clientIdentifier;

@end
