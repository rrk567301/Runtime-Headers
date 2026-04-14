@class NWPath;

@interface NENexusPathFlow : NENexusFlow {
    NWPath *_path;
}

- (id)endpoint;
- (id)clientIdentifier;
- (void).cxx_destruct;
- (id)parameters;

@end
