@class NSString, NSArray;

@interface ICRemoveMediaDRMOperation : ICRequestOperation {
    NSString *_mediaFilePath;
    NSArray *_sinfs;
    NSString *_newFileExtension;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithFilePath:(id)a0 sinfs:(id)a1;
- (void)removeDRMWithCompletionHandler:(id /* block */)a0;

@end
