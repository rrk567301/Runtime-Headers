@class NSString;

@interface POPodcastRevision : NSObject

@property (nonatomic) unsigned long long revisionID;
@property (nonatomic) long long revisionType;
@property (retain, nonatomic) NSString *objectID;
@property char isPodcastCollection;

- (id)description;
- (void).cxx_destruct;
- (id)deletedModelObject;

@end
