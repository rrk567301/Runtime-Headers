@class NSError;

@interface NUResponse : NSObject

@property (retain) id result;
@property (retain) NSError *error;

- (id)initWithResult:(id)a0;
- (id)initWithError:(id)a0;
- (id)description;
- (id)result:(id *)a0;
- (void).cxx_destruct;
- (id)init;

@end
