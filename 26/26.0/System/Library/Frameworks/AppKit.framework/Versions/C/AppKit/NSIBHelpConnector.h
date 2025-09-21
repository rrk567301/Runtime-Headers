@class NSString;

@interface NSIBHelpConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_file;
    NSString *_marker;
}

+ (void)initialize;

- (void)dealloc;
- (void)setDestination:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setSource:(id)a0;
- (id)init;
- (void)setFile:(id)a0;
- (id)label;
- (id)destination;
- (id)file;
- (id)initWithCoder:(id)a0;
- (void)setLabel:(id)a0;
- (id)source;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (id)marker;
- (void)setMarker:(id)a0;

@end
