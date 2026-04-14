@class NSString;

@interface MIDIEndpointWrapper : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int endpointRef;
@property (nonatomic) int uniqueID;
@property (nonatomic) BOOL isSource;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 endpointRef:(unsigned int)a1 uniqueID:(int)a2 isSource:(BOOL)a3;

@end
