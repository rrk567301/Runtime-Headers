@class CDMShortcutDetectorResponse;

@interface CDMShortcutDetectorResponseCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMShortcutDetectorResponse *shortcutDetectorResponse;

+ (BOOL)supportsSecureCoding;
+ (id)serviceGraphName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCmdError:(id)a0;
- (id)initWithShortcutDetectorResponse:(id)a0;

@end
