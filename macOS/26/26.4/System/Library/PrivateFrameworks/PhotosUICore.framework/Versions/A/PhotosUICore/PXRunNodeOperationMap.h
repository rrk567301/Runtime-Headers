@class NSMapTable;

@interface PXRunNodeOperationMap : NSObject {
    NSMapTable *_operationMap;
}

- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)operationForRunNode:(id)a0;

@end
