@class NWPath;

@interface NENexusPathFlow : NENexusFlow

@property (retain) NWPath *path;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)endpoint;
- (id)parameters;
- (id)clientIdentifier;

@end
