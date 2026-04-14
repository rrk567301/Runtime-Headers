@class NSString;

@interface GKLoadContactResourceOperation : GKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *contactId;

+ (double)mainScreenScale;

- (void)main;
- (void).cxx_destruct;
- (id)initWithContactId:(id)a0;
- (id)makeFetchError;
- (id)imageCreationError;

@end
