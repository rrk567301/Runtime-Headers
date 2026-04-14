@class NSString;

@interface NSIBHelpConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_file;
    NSString *_marker;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (id)source;
- (id)label;
- (void)setLabel:(id)a0;
- (void)establishConnection;
- (id)marker;
- (id)file;
- (id)destination;
- (void)setDestination:(id)a0;
- (void)setSource:(id)a0;
- (void)setFile:(id)a0;
- (void)setMarker:(id)a0;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
