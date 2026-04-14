@class NSError;

@interface NUResponse : NSObject

@property (retain) id result;
@property (retain) NSError *error;

- (id)initWithResult:(id)a0;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)result:(id *)a0;

@end
