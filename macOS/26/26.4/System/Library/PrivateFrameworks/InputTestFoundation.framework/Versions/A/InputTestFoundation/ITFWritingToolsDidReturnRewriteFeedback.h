@class NSData, NSString, NSError;

@interface ITFWritingToolsDidReturnRewriteFeedback : NSObject <ITFFeedback, NSSecureCoding, NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_response;
    void /* unknown type, empty encoding */ $__lazy_storage_$_applicationBundleIdentifier;
    void /* function */ error;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isFinished;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *response;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) BOOL isFinished;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0 forApplicationBundleIdentifier:(id)a1;
- (id)initWithResponse:(id)a0 forApplicationBundleIdentifier:(id)a1 isFinished:(BOOL)a2;
- (id)initWithSuggestionData:(id)a0 forApplicationBundleIdentifier:(id)a1 error:(id)a2 isFinished:(BOOL)a3;

@end
