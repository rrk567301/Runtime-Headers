@class NSString, WBSJSONWriter;

@interface WBSJSONExporter : NSObject

@property (class, readonly, nonatomic) NSString *dataType;
@property (class, readonly, nonatomic) unsigned long long schemaVersion;

@property (readonly, nonatomic) WBSJSONWriter *jsonWriter;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (id)initWithFileHandle:(id)a0 error:(id *)a1;
- (id)initWithJSONWriter:(id)a0 error:(id *)a1;

@end
