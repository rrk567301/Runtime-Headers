@class NSString;
@protocol TRIPaths;

@interface TRILogTreatmentReader : NSObject {
    int _projectId;
    id<TRIPaths> _paths;
}

@property (readonly) NSString *path;

+ (id)readerWithProjectId:(int)a0 paths:(id)a1;

- (id)namespaceLoggingTreatmentPath;
- (id)initWithProjectId:(int)a0 paths:(id)a1;
- (id)treatments;
- (void).cxx_destruct;
- (id)fetchRolloutLogNamespaces;

@end
