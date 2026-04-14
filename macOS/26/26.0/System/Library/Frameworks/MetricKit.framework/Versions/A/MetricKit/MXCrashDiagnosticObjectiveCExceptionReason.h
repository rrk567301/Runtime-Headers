@class NSString, NSArray;

@interface MXCrashDiagnosticObjectiveCExceptionReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *composedMessage;
@property (copy) NSString *formatString;
@property (copy) NSArray *arguments;
@property (copy) NSString *exceptionType;
@property (copy) NSString *className;
@property (copy) NSString *exceptionName;

- (id)JSONRepresentation;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithComposedMessage:(id)a0 formatString:(id)a1 arguments:(id)a2 type:(id)a3 className:(id)a4 exceptionName:(id)a5;

@end
