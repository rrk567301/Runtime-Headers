@class NSError;

@interface NUResponse : NSObject

@property (retain) id result;
@property (retain) NSError *error;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)init;
- (id)result:(id *)a0;
- (id)description;

@end
