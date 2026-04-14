@class NSArray;

@interface ASDRestoreApplicationsRequestResponse : ASDRequestResponse {
    BOOL success;
}

@property (readonly, nonatomic) NSArray *results;

- (id)init;
- (id)initWithResults:(id)a0;
- (BOOL)success;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
