@class NSArray, NSString;

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=_isError) char _error;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char isDestructive;
@property (readonly, nonatomic) NSArray *affectedContainers;
@property (retain, nonatomic) NSString *undoAlertTitle;
@property (retain, nonatomic) NSString *undoAlertMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithType:(long long)a0;
+ (id)_actionForError:(id)a0;
+ (id)destructiveActionWithType:(long long)a0;
+ (id)destructiveActionWithType:(long long)a0 affectedContainers:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)a0;
- (id)_initWithProtobufData:(id)a0;
- (id)initWithType:(long long)a0 destructivity:(char)a1 affectedContainers:(id)a2;

@end
