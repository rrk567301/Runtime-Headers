@class NSString, NSValue, NSError, NSAttributedString;

@interface ITFWritingToolsDidReturnCompositionFeedback : NSObject <ITFFeedback, NSSecureCoding, NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_response;
    void /* unknown type, empty encoding */ $__lazy_storage_$_applicationBundleIdentifier;
    void /* function */ error;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isFinished;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSAttributedString *response;
@property (nonatomic, retain) NSValue *range;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) BOOL isFinished;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0 forApplicationBundleIdentifier:(id)a1;
- (id)initWithResponse:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forApplicationBundleIdentifier:(id)a2 isFinished:(BOOL)a3;

@end
