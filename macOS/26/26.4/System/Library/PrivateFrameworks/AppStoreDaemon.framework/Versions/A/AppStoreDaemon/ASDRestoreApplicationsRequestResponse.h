@class NSArray;

@interface ASDRestoreApplicationsRequestResponse : ASDRequestResponse {
    BOOL success;
}

@property (readonly, nonatomic) NSArray *results;

- (BOOL)success;
- (id)initWithResults:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
