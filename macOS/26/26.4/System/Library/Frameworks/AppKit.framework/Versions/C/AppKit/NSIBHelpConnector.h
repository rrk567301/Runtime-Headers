@class NSString;

@interface NSIBHelpConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_file;
    NSString *_marker;
}

+ (void)initialize;

- (id)file;
- (void)setLabel:(id)a0;
- (id)destination;
- (void)setDestination:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)label;
- (id)source;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setSource:(id)a0;
- (void)dealloc;
- (void)setFile:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (id)marker;
- (void)setMarker:(id)a0;

@end
