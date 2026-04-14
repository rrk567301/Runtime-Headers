@class NSError;

@interface FIOperationReply : NSObject

@property unsigned int resolution;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)initWithResolution:(unsigned int)a0 error:(id)a1;

@end
