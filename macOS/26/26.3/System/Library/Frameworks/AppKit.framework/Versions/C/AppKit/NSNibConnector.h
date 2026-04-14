@class NSString;

@interface NSNibConnector : NSObject <NSCoding> {
    id _source;
    id _destination;
    NSString *_label;
}

@property (weak) id source;
@property (weak) id destination;
@property (copy) NSString *label;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
