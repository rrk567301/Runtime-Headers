@class NSString;

@interface AAMisconfiguredAgePromptViewModel : NSObject <AAAgeMigrationPromptModelProtocol, NSSecureCoding, NSCoding> {
    void /* function */ title;
    void /* function */ message;
    void /* function */ primaryButtonText;
    void /* function */ secondaryButtonText;
    void /* function */ cancelButtonText;
    void /* function */ bundleID;
    void /* function */ altDSID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *primaryButtonText;
@property (nonatomic, readonly) NSString *secondaryButtonText;
@property (nonatomic, readonly) NSString *cancelButtonText;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 message:(id)a1 primaryButtonText:(id)a2 secondaryButtonText:(id)a3 cancelButtonText:(id)a4 bundleID:(id)a5 altDSID:(id)a6;

@end
