@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DDScannerServiceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    int _scannerType;
    char _spotlightSuggestionsEnabled;
    char _remoteScannerEnabled;
    NSString *_recyclingIdentifier;
    long long *_jobIdentifierPtr;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char noObjC;
@property (nonatomic) char languageHighConfidence;
@property int script;
@property (retain) NSString *country;
@property (nonatomic) char spotlightSuggestionsEnabled;
@property (nonatomic) char remoteScannerEnabled;
@property (nonatomic) double timeout;
@property (nonatomic) long long resultsOptions;
@property (nonatomic) long long scannerOptions;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) int qos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScannerType:(int)a0 passiveIntent:(char)a1;
- (id)initEmpty;
- (int)scannerType;

@end
