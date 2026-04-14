@class DEDBugSession, NSString;

@interface DEDTestingFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDBugSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)archivedClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)finishSession:(id)a0 withConfiguration:(id)a1;
- (void)writeData:(id)a0 filename:(id)a1;
- (id)flattenDirectories:(id)a0;

@end
