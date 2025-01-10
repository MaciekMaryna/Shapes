#ifndef TESTAPP_H
#define TESTAPP_H

/******************************************************************************
 * Includes
 ******************************************************************************/

namespace TestApp  /* BEGIN: namespace TestApp */
{

void ClearConsole();
void HideCursor(void);
void ShowCursor(void);
int AsciiIfKeyPressed(void);
void TestApp_main(void);

} /* END: namespace TestApp */

#endif /* #ifndef TESTAPP_H */

