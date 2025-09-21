@class NSUUID, NSString, NSURL, NSData;

@interface UAPasteboardFileItemProvider : NSObject <UAPasteboardFileItemProviding>

@property (retain) NSURL *fileURL;
@property (retain) NSData *sandboxExtension;
@property char isDir;
@property (nonatomic) char preferFileRep;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)conformsToProtocol:(id)a0;

- (void).cxx_destruct;
- (void)getDataWithCompletionBlock:(id /* block */)a0;
- (void)getDataFileWithCompletionBlock:(id /* block */)a0;
- (void)accessFileAtURLWithCompletion:(id /* block */)a0;
- (id)getFileName;
- (id)initWithURL:(id)a0 sandboxExtension:(id)a1;

@end
