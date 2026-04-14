@class NWPath;

@interface NENexusPathFlow : NENexusFlow {
    NWPath *_path;
}

- (id)endpoint;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)parameters;

@end
