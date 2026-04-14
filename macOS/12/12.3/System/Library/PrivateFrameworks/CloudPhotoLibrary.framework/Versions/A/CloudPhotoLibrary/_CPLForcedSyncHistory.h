@class CPLScopeFilter, NSString, NSDate;

@interface _CPLForcedSyncHistory : NSObject

@property (readonly, nonatomic) BOOL discarded;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) CPLScopeFilter *filter;
@property (readonly, nonatomic) Class taskClass;
@property (readonly, nonatomic) NSString *errorDescription;

- (void).cxx_destruct;
- (id)initWithForcedSyncTask:(id)a0 discarded:(BOOL)a1 error:(id)a2;
- (id)descriptionWithNow:(id)a0;

@end
