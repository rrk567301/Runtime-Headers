@class NSArray;

@interface ASDRestoreApplicationsRequestResponse : ASDRequestResponse {
    char success;
}

@property (readonly, nonatomic) NSArray *results;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)success;
- (id)initWithResults:(id)a0;

@end
