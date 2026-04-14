@class NSDictionary, NSURLComponents, NSString;

@interface PFFileSystemEndpoint : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSDictionary *resourceValues;
@property (readonly, nonatomic) NSURLComponents *components;
@property (readonly, nonatomic) NSString *pathComponents;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;
- (id)initWithRelativePathComponents:(id)a0;
- (BOOL)copyURL:(id)a0 relativeTo:(id)a1 fileManager:(id)a2 error:(out id *)a3;
- (id)endPointByAppendingEndpoint:(id)a0;
- (id)endPointByAppendingRelativePathComponents:(id)a0;
- (id)initWithComponents:(id)a0 attributes:(id)a1 resourceValues:(id)a2;
- (id)initWithRelativePathComponents:(id)a0 attributes:(id)a1 resourceValues:(id)a2;
- (BOOL)prepareEndpointForBaseURL:(id)a0 fileManager:(id)a1 error:(out id *)a2;
- (id)resolveWithBaseURL:(id)a0;
- (BOOL)writeData:(id)a0 relativeTo:(id)a1 fileManager:(id)a2 error:(out id *)a3;

@end
